#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0, lp = 0, rp = height.size() - 1;

    if(height.size() == 2) return min(height[lp], height[rp]);

    while(lp < rp) {
        maxWater = max(maxWater, min(height[lp], height[rp]) * (rp - lp));
        height[lp] < height[rp] ? lp ++ : rp --;
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 2, 6, 5, 4, 8, 2, 7};

    cout << maxArea(height);
    
    return 0;
}
