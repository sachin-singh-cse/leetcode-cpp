#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s){
        //reverse(s.begin(),s.end());

        int i = 0, j = s.size() - 1;
        while ( i < j){
            swap(s[i],s[j]);
            i++; j--;
        }
    }
};

int main() {

    vector<char> s = {'h','e','l','l','o'};

    Solution solution;
    solution.reverseString(s);

    for( char val : s){
        cout<<val<<" ";
    }
    cout<<"\n";

}