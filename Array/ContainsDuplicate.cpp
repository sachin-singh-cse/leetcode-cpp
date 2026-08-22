#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool containsDuplicate(vector<int>& arr){
        // sort(arr.begin(), arr.end());
        // int idx = 0;
        // for ( int i = 1; i<arr.size(); i++){
        //     if (arr[i] != arr[idx]){
        //         idx++;
        //     }
        //     else return true;
        // }

        unordered_set<int> s;

        for ( auto val : arr){
            if (s.find(val) != s.end()){
                return true;
            }
            else {
                s.insert(val);
            }
        }

        return false;

    }  

};

int main() {

    vector<int> arr{1,2,3,4};

    Solution s;
    cout<<(s.containsDuplicate(arr) ? "Contains Duplicate" : "No Duplicate");


    return 0;
}