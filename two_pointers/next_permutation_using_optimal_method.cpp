#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size() - 1, pivot = -1;
    for(int i = n - 1; i >= 0; i --) {
        if(nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }
    if(pivot == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i = n; i > pivot; i --) {
        if(nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }
    reverse(nums.begin() + pivot + 1, nums.end());

    for(int val : nums) {
        cout << val << " ";
    }
}

int main() {
    vector <int> nums = {1, 1, 5};
    nextPermutation(nums);
}
