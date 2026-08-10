#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int missingNumber(vector<int>& arr){
        int n = arr.size();
    //     int xorAll = 0;
    //     int xorArr = 0;

    //     for (int i = 0; i<=n; i++){
    //         xorAll += i;
    //     }
    //     for (int i = 0; i<n; i++){
    //         xorArr += arr[i];
    //     }

    // return xorAll ^ xorArr;

        int totalSum = n * (n+1) / 2;
        int currSum = 0;
        for(auto val : arr){
            currSum += val;
        }

        return totalSum - currSum;

    }
    
};

int main() {

    vector<int> arr{9,6,4,2,3,5,7,0,1};

    Solution s;
    cout<<s.missingNumber(arr);

    return 0;
}