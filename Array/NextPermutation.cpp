#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //next_permutation(nums.begin(), nums.end());

        int n = nums.size();
        int break_point = -1;

        //find break point
        for (int i = n-2; i>=0; i--){
            if (nums[i] < nums[i+1]){
                break_point = i;
                break;
            }

        }
        // If break point not there reverse the whole array
        if (break_point < 0){
            reverse(nums.begin(), nums.end());
            return ;
        }
        //find rightmost element which is greater than pivot or break_point number search from last to pivot 
        for (int i = n-1; i>break_point; i--){
            if (nums[i] > nums[break_point]){
                swap(nums[i],nums[break_point]);
                break;
            }
        }
        //revese the array from pivot + 1 to last
        reverse(nums.begin() + break_point + 1, nums.end());
    }
};

int main() {

    vector<int> arr{1,2,3,4,5};

    Solution S;
    S.nextPermutation(arr);

    for (auto it : arr){
        cout<<it<<" ";
    }

    return 0;
}