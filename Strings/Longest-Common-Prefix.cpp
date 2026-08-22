#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& str){
        if ( str.empty()) return "";

        int n = str[0].size();
        int m = str.size();

        for (int i = 0; i < n; i++) {
            char c = str[0][i];
            for (int j = 1; j < m; j++) {
                if ( i >= str[j].length() || str[j][i] != c){
                    return str[0].substr(0,i);
                }
            }
        }

        return str[0];
    }
};

int main() {
    vector<string> str = {"flower","flow","flight"};

    Solution S;
    cout<<S.longestCommonPrefix(str)<<"\n";
    
    return 0;
}