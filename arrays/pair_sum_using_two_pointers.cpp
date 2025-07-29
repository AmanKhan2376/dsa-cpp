#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1;

    while(i < j) {
        int sum = nums[i] + nums[j];
        if(sum < target) {
            i ++;
        }else if(sum > target) {
            j --;
        }else {
            return {i + 1, j + 1};
        }
    }
    return {};
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 13;     
    
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << ", " << ans[1] ;

    return 0;
}
