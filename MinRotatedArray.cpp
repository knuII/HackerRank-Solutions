#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, min = 10000;
    cin>>n;
    int array[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];
    }
    for(int i = 0; i<n; i++){
        if (array[i] <= min){
            min = array[i];
        }
    }
    cout<<min;
}