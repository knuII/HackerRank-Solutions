#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int max = 0;
    cin>>n;
    int array[n];
    for (int i = 0; i<n; i++){
        cin>>array[i];
    }
    for (int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if ( array[j] > array[i] && array[j] - array[i] > max){
                max = array[j] - array[i];
            
            }
        }
    }
    if (max > 0){
        cout<<max;
    }else{
        cout<< 0;
    }
}