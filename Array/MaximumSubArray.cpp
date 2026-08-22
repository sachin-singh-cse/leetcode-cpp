#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int maxSum(vector<int>& arr) {
        int sum = 0;
        int maximum = INT_MIN;
    
        for( int i = 0; i<arr.size(); i++){
            sum += arr[i];
            maximum = max(sum, maximum);

            if ( sum < 0){
                sum = 0;
            }
        }
        return maximum;
    }
};

int main() {

    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    // // int sum = 0;
    // // int maxSum = INT_MIN;
    
    // // for( auto it : nums){
    // //     sum += it;
    // //     maxSum = max(sum, maxSum);

    // //     if ( sum < 0){
    // //         sum = 0;
    // //     }
    // // }

    // cout<<maxSum<<endl;

    Solution S;
    cout<<S.maxSum(nums);
}
