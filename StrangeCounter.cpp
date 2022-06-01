#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	int m = 1, k = 0;
	for(int i = 1; i<=n; i++){
		arr[i] = (3*m) - k;
		if(k < 3*m - 1){
			k++;
		}
		else{
			k = 0;
			m = m*2;
		}
	}
	cout<<arr[n];
}
