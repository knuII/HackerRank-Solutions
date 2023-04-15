#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int sum1 = 0;
    int max1 = 0;
    
    for(int i = 0; i<n; i++){
        sum1 = sum1 + arr[i];
        if(max1 < sum1 ){
            max1 = sum1;
        }
        if (sum1 < 0){
            sum1 = 0;
        }
    }
    cout<<max1;
    return 0;
}
