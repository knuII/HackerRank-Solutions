#include <bits/stdc++.h>
using namespace std;
//I AM SPEED
int main(){
	int n, min = 1000000;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
    sort(arr,arr+n);
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(abs(arr[i] - arr[j]) > 0 && abs(arr[i] - arr[j]) <= min){
				min = abs(arr[i] - arr[j]);
			}
			}
		}
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(abs(arr[i] - arr[j]) == min){
					cout<<arr[i]<<" ";
				}
			}
		}
	}
