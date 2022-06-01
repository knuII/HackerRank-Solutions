#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, max = 0, count = 0;
	cin>>n;
	long arr[n];
	
	for(int i = 0; i<n; i++){
		cin>>arr[i];
		if(arr[i]>= max){
			max = arr[i];
		}
	}
	for(int i = 0; i<=n-1; i++){
		for(int j = i+1; j<n; j++){
			if((arr[i]*arr[j]) <= max){
				count++;
			}
		}
	}
	cout<<count;
}
