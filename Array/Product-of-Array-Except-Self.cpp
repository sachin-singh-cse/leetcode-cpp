#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n,1);

        //Calculating prefix
        int prefix = 1;
        for ( int i = 0 ; i < n ; i++){
            ans[i] = prefix;
            prefix *= arr[i];
        }
        
        //Calculating Suffix
        int suffix = 1;
        for ( int i = n-1; i >= 0; i--){
            ans[i] *= suffix; //Multiply suffix to prefix and storing in answer
            suffix *= arr[i]; //calculating suffix one by one and multiplying to prefix
        }

        return ans;
    }
};

int main() {
    vector<int> arr{1,2,3,4};

    Solution S;
    vector<int> res = S.productExceptSelf(arr);

    for (auto it: res){
        cout<<it<<" ";
    }
}