#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int arr[t][2];
	for(int i = 0; i<t; i++){
		for(int j = 0; j<2; j++){
			cin>>arr[i][j];
		}
	}
	sort(arr.begin(), arr.end());
}
