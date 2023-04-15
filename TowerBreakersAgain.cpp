#include <bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin>>t;
	for(int i = 0; i<t; i++){
		cin>>n;
		int arr[n], count = 0;
		for(int j = 0; j<n; j++){
			cin>>arr[j];
			if(arr[j] != 1){
				count++;
			}
		}	
		if(count % 2 == 0){
			cout<<2<<endl;
		}else{
			cout<<1<<endl;
		}
	}
}
