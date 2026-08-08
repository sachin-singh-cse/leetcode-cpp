#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPro = 0;

        for( int price : prices){
            if ( minPrice > price ){
                minPrice = price;
            }
            else if (price - minPrice > maxPro){
                maxPro = max(price - minPrice, maxPro);
            }
        }
        return maxPro;

    }
};

int main() {

    vector<int> price{7,1,5,3,6,4};
    // int n = price.size();
    // int minPrice = INT_MAX;
    // int maxProfit = 0;
    // int ans;

    // for(int i = 0; i<n; i++){
    //     for ( int j = i; j<n; j++){
    //         int profit = price[j] - price[i];
    //         maxProfit = max(profit, maxProfit);
    //     }
    // }
    // cout<<maxProfit<<endl;

    Solution s;

    int ans = s.maxProfit(price);
    cout<<ans;
    
}