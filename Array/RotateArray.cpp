#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    void reverseArray(vector<int>& arr, int st, int end){
        while ( st < end){
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }
    void rotateArray (vector<int> & arr, int k){
        int n = arr.size();
        k = k % n;
        
        //For Right Rotation
        reverseArray(arr, 0, n-1);
        reverseArray(arr, 0, k-1);
        reverseArray(arr, k, n-1);

        // For Left Rotation
        // reverseArray(arr, 0, k-1);
        // reverseArray(arr, k, n-1);
        // reverseArray(arr, 0, n-1);
    }
};

int main() {

    vector<int> nums{1,2,3,4,5,6,7};
    int k = 3;

    Solution S;
    S.rotateArray(nums,k);

    for ( auto it : nums){
        cout<<it<<" ";
    }


}