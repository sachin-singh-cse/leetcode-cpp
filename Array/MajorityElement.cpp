#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mejorityElement(vector<int> nums){
        int mejElement;
        int count = 0;

        //Array ke first element ko mejority maan ke count ko increase karenge agar next element same rha to nhi to count ko decrease karenge and jaise hi count 0 hota hai mejority element ko update kar denge current val se 
        for (auto val : nums){
            if ( count == 0){
                mejElement = val;
            }
            else if ( mejElement == val) count++;
            else
                count--;
        }

        return mejElement;
    }
};

int main(){

    vector<int> arr{2,2,1,1,1,2,2};

    // unordered_map<int, int> m;
    // int n = arr.size();
    // int ans = 1;

    // for (auto val : arr){
    //     m[val]++;
    // }
    // for ( auto val : m){
    //     if (val.second > n/2 ) cout<<val.first;
    // }


    Solution solution;
    cout<<solution.mejorityElement(arr);



    return 0;
}