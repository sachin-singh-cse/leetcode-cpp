#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int removeDuplicates(vector<int>& arr){
        int n = arr.size();
        int k = 1;
        for ( int i = 1; i<n; i++){
            if ( arr[i] != arr[i-1]){
                arr[k] = arr[i];   
                k++;
            }
        }
        return k;
    } 
};

int main (){

    vector<int> nums{0,0,1,1,1,2,2,3,3,4};
    // int n = nums.size();

    // int j = 0;
    // for ( int i = 1; i<n; i++){
    //     if ( nums[i] != nums[j]){
    //         j++;
    //         nums[j] = nums[i];   
    //     }
    // }

    Solution S;

    S.removeDuplicates(nums);

    for ( auto it : nums){
        cout<<it<<" ";
    }
    cout<<"\n"<<S.removeDuplicates(nums);
}