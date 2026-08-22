#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums{2,3,1,1,4};
    int n = nums.size();
    int maxReach = 0, jump = 0, end = 0;

    for (int i = 0; i < n -1; i++) {
        maxReach = max(maxReach, i + nums[i]);

        if ( i == end){
            jump++;
            end = maxReach;
        }
    }

    cout<<jump;
    
    return 0;
}