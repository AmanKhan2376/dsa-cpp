#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices){
    int n = prices.size();
    int mP = 0 , bestBuy = prices[0];
    
    for(int i = 1; i < n; i ++) {
        if(prices[i] > bestBuy) {
            mP = max(mP, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return mP;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}
