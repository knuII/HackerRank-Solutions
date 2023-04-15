#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int j;
    cin>>n;
    int array[n];
    int truth = 0;
    for (int i = 0; i<n; i++){
        cin>>array[i];
    }
    for(int i = 0; i<n;){
        if(array[i] != 0){
            i++;
        }else{
            j = i;
            i = i + array[i-1] - 1;
            if(j-i == 0 ){
                break;
            }
        }
        if( i == n-1){
            truth = 1;
            break;
        }
    }
    if (truth == 1){
        cout<<"true";
    }else{
        cout<<"false";
    }
}