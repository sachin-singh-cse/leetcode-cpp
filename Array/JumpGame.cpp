#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool canJump(vector<int>& nums){
        int n = nums.size();
        int maxReach = 0;

        for (int i = 0; i < n; i++) {
            if (i > maxReach) return false;

            maxReach = max(maxReach, i + nums[i]);
        }

        return true;
    }

};

int main() {
    
    vector<int> arr{2,3,1,1,4};

    Solution solution;
    cout<<boolalpha<<solution.canJump(arr);

    return 0;
}