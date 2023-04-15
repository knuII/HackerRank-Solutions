#include <bits/stdc++.h>

using namespace std;

int main(){
	int a;
	int r;
	cin>>a;
	int arr[a+1];
	for(int i = 0; i<a; i++){
		cin>>arr[i];
	}
    cin>>r;
	for(int j = 1; j<=r; j++){
		arr[a] = arr[0];
		for(int k = 0; k<a-1; k++){
			arr[k] = arr[k+1];
		}
		arr[a-1] = arr[a];	
	}
	for(int i = 0; i<a; i++){
		cout<<arr[i]<<" ";
	}
}
