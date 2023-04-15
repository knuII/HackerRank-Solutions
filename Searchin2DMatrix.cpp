#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, flag = 0;
    int num;
    cin>>m;
    cin>>n;
    int arr[m][n];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cin>>num;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if (arr[i][j] == num){
                flag = 1;
            }else{
                flag = flag;
            }
        }
    }
    if(flag == 1){
        cout<<"true";
    }else{
        cout<<"false";
    }
}