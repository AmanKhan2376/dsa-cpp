#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    for(int p = 1; p < arr.size() - 1; p ++) {
        if(arr[p - 1] < arr[p] && arr[p] > arr[p + 1]) {
            return p;
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {0, 1, 0};
    cout << peakIndexInMountainArray(arr);
}
