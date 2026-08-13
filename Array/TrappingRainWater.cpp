#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height){
        int n = height.size();
        int water = 0;
        int leftMax = 0, rightMax = 0;
        int st = 0, end = n-1;
        while(st < end){
            if (height[st] < height[end]){
                if (height[st] >= leftMax)
                    leftMax = height[st];
                else
                    water += leftMax - height[st];
                    st++;
            }
            else {
                if (height[end] >= rightMax)
                    rightMax = height[end];
                else
                    water += rightMax - height[end];
                    end--;
            }
        }

        return water;

    };

};

int main() {

    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
        // int n = height.size();
        // int water = 0;


    // //Brute Force TC = O(n^2) and SC = O(1)
    // for ( int i = 0; i < n; i++){
    //     //Find Maximum Number in the left including i
    //     int leftMax = 0;
    //     int rightMax = 0;
    //     for (int j = 0; j<=i; j++){
    //         leftMax = max(leftMax,height[j]);
    //     }
    //     //Find Maximum Number in the right including i
    //     for (int j = n-1; j >=i; j--){
    //         rightMax = max(rightMax,height[j]);
    //     }
    //     //Add minimum of leftMax and rightMax - currect value to water
    //     water += min(leftMax, rightMax) - height[i];
    // }




    // //Better Solution Using prefix and suffix TC = O(n) and SC = O(n)
    // vector<int> rightMax(n);
    // vector<int> leftMax(n);

    // //All the Max Element from L to R
    // for ( int i = 1; i<n; i++){
    //     leftMax[0] = height[0];
    //     leftMax[i] = max(leftMax[i-1],height[i]);
    // }
    // //All the Max Element from R to L
    // for ( int i = n-2; i >= 0; i--){
    //     rightMax[n-1] = height[n-1];
    //     rightMax[i] = max(rightMax[i+1], height[i]);
    // }
    // for ( int i = 0; i<n; i++){
    //     water += min(leftMax[i],rightMax[i]) - height[i];
    // }



    Solution solution;
    cout<<solution.trap(height);

    return 0;
}