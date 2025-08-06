#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

bool isValid(int max, vector<int> & arr, int m, int n) {
    int std = 1, pages = 0;
    for(int i = 0; i < n; i ++) {
        if(arr[i] > max) return false;
        if(pages + arr[i] <= max) {
            pages += arr[i];
        } else {
            std ++;
            pages = arr[i];
        }
    }
    if(std > m) return false;
    if(std <= m) return true;
}

int allocateBooks(vector<int> & arr, int n, int m){
    if(m > n) return -1;

    int st = 0, end = accumulate(arr.begin(), arr.end(), 0), ans;

    while(st <= end) {
        int mid = st + ((end - st) / 2);
        if(isValid(mid, arr, m, n)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 100000};
    int n = 3, m = 2;
    cout << allocateBooks(arr, n, m);
}
