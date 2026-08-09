#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        for (int i = 1; i < n; ++i) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; --i) {
            ans[i] *= suffixProduct;
            suffixProduct *= nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution solution;
    vector<int> ans = solution.productExceptSelf(nums);

    for (size_t i = 0; i < ans.size(); ++i) {
        cout << ans[i] << (i + 1 == ans.size() ? '\n' : ' ');
    }

    return 0;
}
