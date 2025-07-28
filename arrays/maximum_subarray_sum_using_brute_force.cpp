#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solution(const vector<int> &n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < (int)n.size(); start++) {
        int currSum = 0;
        for (int end = start; end < (int)n.size(); end++) {
            currSum += n[end];
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, -3, 5, 6};
    cout << solution(arr);
    return 0;
}
