#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
  if (a == 0)
    return b;
  return gcd(b % a, a);
}



int main(){

    int n;
    int arr[n];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    };
    int final_gcd = arr[0];
    for(int i = 1; i<n; i++){
        final_gcd = gcd(arr[i], final_gcd);
    }
    cout<<final_gcd;
    }