#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid ++;
            low ++;
        } else if (nums[mid] == 1) {
            mid ++;
        } else {
            swap(nums[mid], nums[high]);
            high --;
        }
    }

    for(int i = 0; i < n; i ++) {
        cout << nums[i] << " ";
    }
}

int main() {
    vector <int> nums = {2, 0, 1, 1, 0};
    sortColors(nums);
}
