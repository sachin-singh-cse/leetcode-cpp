#include <bits/stdc++.h>
using namespace std;

//Dutch National Flag algorithm which include three pointer st for 0, mid for 1, end for 2;

class Solution {
public:
    void sortColors(vector<int>& arr){
        int st = 0;
        int mid = 0;
        int end = arr.size() - 1;

        while( mid <= end){
            if ( arr[mid] == 0){
                swap(arr[st], arr[mid]);
                st++;mid++;

            }else if (arr[mid] == 1){
                mid++;
            }else {
                swap(arr[mid], arr[end]);
                end--;
            }
        }
    }
};

int main() {

    vector<int> arr{2,0,2,1,1,0};

    Solution solution;
    solution.sortColors(arr);
    for (auto val : arr){
        cout<<val<<" ";
    }

    return 0;
}