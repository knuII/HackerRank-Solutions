	#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		int t, n, k, c;
		cin>>t;
		for(int i = 0; i<t; i++){
			cin>>n>>k;
			int arr[n];
			for(int j = 0; j<n; j++){
				cin>>arr[j];
			}
			c = 0;
			for(int j = 0; j<n; j++){
				if(arr[j]<= 0){
					c++;
				}
			}
			if(c>=k){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}
