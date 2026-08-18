#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr{1,0,2};

    int n = arr.size();
    int i = 1, candies = 1;


    while ( i < n){
        if ( arr[i] == arr[i-1]) {
            candies++; i++; continue;
        } 

        int up = 1;
        while ( i < n && arr[i] > arr[i-1]) {
            up++; candies += up; i++;
        }

        int down = 1;
        while ( i < n && arr[i] < arr[i-1]){
            candies += down; down++; i++;
        }

        if ( down > up) {
            candies += (down - up);
        }

    }

    cout<<candies;

    
    return 0;
}