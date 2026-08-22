#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t){
        if ( s.size() != t.size()) return false;

        vector<int> count(26,0);

        for ( char c : s){
            count[c-'a']++;
        }
        for ( char c : t){
            count[c-'a']--;
        }

        bool allZeroes = all_of(begin(count), end(count), [] (int val){
            return val == 0;
        });

        return allZeroes;
    }
};

int main() {

    string s = "anagram";
    string t = "nagaram";

    Solution S;
    cout<<boolalpha<<S.isAnagram(s,t)<<"\n";
    
    return 0;
}