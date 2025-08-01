#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0, base;

    for(int leftSide = 0; leftSide < height.size(); leftSide ++) {
        for(int rightSide = leftSide + 1; rightSide < height.size(); rightSide ++) {
            maxWater = max(maxWater, min(height[rightSide], height[leftSide]) * rightSide - leftSide);
        }
    }
    return maxWater;
}

int main() {
    vector<int> height = {1,1};

    cout << maxArea(height);
    
    return 0;
}
