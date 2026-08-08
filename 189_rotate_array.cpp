#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int> &arr, int tar){
 int n = arr.size();
    if ( n == 0){
        return ;
    }
    tar = tar % n;
    reverse(arr.begin() , arr.end());

    reverse(arr.begin() , arr.begin() + k);


}

int main(){
    vector<int> a{1,2,3,4,5,6};
    int t = 2;
    rotate(a, t);

    for (int i=0 ; i < a.size() ; i++){
        cout<<rotate(a,t)<<" ";
    }
}