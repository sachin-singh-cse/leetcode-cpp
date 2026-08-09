#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};

int main() {
    vector<int> nums{2, 2, 1, 1, 1, 2, 2};
    Solution s;
    cout << s.majorityElement(nums);
}
