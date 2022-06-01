#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,b,k;
	int max = 0;
	cin>>n>>m;
	int arr[n+1];
	for(int i = 0; i<n+1; i++){
		arr[i] = 0;
	}
	for(int i = 0; i<m; i++){
		cin>>a>>b>>k;
		for(int i = a; i<=b; i++){
			arr[i] = arr[i] + k;
		}
	}
	for (int i = 1; i<n+1; i++){
		if(max<=arr[i]){
			max = arr[i];
		}else{
			max = max;
		}
	}
	cout<<max;	
}
