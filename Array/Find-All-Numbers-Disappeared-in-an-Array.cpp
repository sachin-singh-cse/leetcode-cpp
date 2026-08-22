#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums){
        vector<int> ans;
        for ( int i = 0; i<nums.size(); i++){
            int idx = abs(nums[i]) -1;
            if ( nums[idx] > 0){
                nums[idx] = - nums[idx];
            }
        }
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] > 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};


int main() {
    vector<int> nums{4,3,2,7,8,2,3,1};
    vector<int> res;

    // unordered_set<int> s(nums.begin(),nums.end());
    // for (int i = 1; i <= nums.size(); i++){
    //     if (s.find(i) == s.end()){
    //         res.push_back(i);
    //     }
    // }

    // for (auto val : ans){
    //     cout<<val<<" ";
    // }

    //this will take tc = O(n) and sp = O(n)

    Solution solution;
    res = solution.findDisappearedNumbers(nums);
    for ( auto it : res){
        cout<<it<<" ";
    }

    return 0;
}