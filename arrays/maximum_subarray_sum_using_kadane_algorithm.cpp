#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solution(const vector<int> & n) {
    int currSum = 0, maxSum = INT_MIN;

    for(int val : n) {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, -3, 5, 6};
    cout << solution(arr);
    return 0;
}
