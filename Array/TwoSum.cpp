#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int, int> m;
        vector<int> ans;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            int comp = target - curr;

            if ( m.find(comp) != m.end()) {// Executes only if complement key is present in a map

                ans.push_back(m[comp]);//Accessing index of a complement key in a map which was previously stored
                ans.push_back(i);//current index ans me jayega

            }
            m[curr] = i;//storing key as current with a index value in a map

        }
    return ans;
    }
};

int main() {

    vector<int> arr = {2,7,11,15};
    int target = 18;

    Solution solution;
    vector<int> ans = solution.twoSum(arr, target);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}