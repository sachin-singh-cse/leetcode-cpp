#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& arr){
        int n = arr.size();
        int ptr1 = 0;

        for (int ptr2 = 0; ptr2 < n; ptr2++){
            if (arr[ptr2] != 0){
                swap(arr[ptr1], arr[ptr2]);
                ptr1++;
            }
        }
    }
};

int main() {

    vector<int> nums{0,1,0,3,12};

    Solution S;
    S.moveZeroes(nums);

    for (auto val : nums){
        cout<<val<<" ";
    }

    return 0;
}