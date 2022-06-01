#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	long p = 0, d = 0, min = 0;
	cin>>n;
	long arr[n][2];
	for(int i = 0; i<n;i++){
		for(int j = 0; j<2; j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i<n; i++){
			p = arr[i][0];
			d = arr[i][1];
		for(int j = 1; j<n; j++){
			if(p>=d){
				p = p-d;
				d = arr[j][1];
				p = p + arr[j][0];
			}else{
				p = -1;
			}
		}
		if(p>=0){
			min = i;
		}	
	}
	cout<<min;
}
