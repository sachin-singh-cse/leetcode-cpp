#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int> height){
        int n = height.size();
        int max_area = 0;
        int left = 0, right = n-1;

        while (left < right){
            int area = min(height[left],height[right]) * (right - left);
            max_area = max(area,max_area);

            if (height[left] < height[right]) 
                left++;
            else
                right--;
        }

        return max_area;
    }

};

int main() {

    vector<int> height{1,8,6,2,5,4,8,3,7};
    // int n = height.size();
    // int ans = 0;

    // for (int i = 0; i < n; i++) {
    //     for (int j = i+1; j < n; j++) {
    //         int area = min(height[i],height[j]) * (j-i);
    //         ans = max(ans,area);
    //     }
    // }

    // cout<<ans;

    Solution S;
    cout<<S.maxArea(height);


    
    return 0;
}