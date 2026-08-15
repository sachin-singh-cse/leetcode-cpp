#include <bits/stdc++.h>
using namespace std;

class Solution{
public: 
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
        int n = gas.size();
        int tank = 0;
        int start = 0, totalGas = 0;

        for (int i = 0; i < n; i++) {
            tank += gas[i] - cost[i];
            totalGas += gas[i] - cost[i];

            if (tank < 0){
                start = i+1;
                tank = 0;
            }

        }

        return totalGas <= 0 ? start : -1;
    }
};

int main() {

    vector<int> gas{1,2,3,4,5};
    vector<int> cost{3,4,5,1,2};
    
    Solution S;
    cout<<S.canCompleteCircuit(gas,cost);
    
    return 0;
}