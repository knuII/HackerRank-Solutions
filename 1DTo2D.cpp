#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,n,m;
    cin>>r;
    int arr1D[r];
    
    for(int i = 0; i<r; i++){
        cin>>arr1D[i];        
    }
    
    cin>>n;// no. of rows
    cin>>m;// no. of columns
    
    int arr2D[n][m];
    int iter = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            arr2D[i][j] = arr1D[iter];
            iter++;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<arr2D[i][j]<<" ";
        }
        cout<<"\n";
    }
}
