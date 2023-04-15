#include <bits/stdc++.h>
using namespace std;

int main(){
	int max = -10000;
	string s;
	int arr[26];
	for(int i = 0; i<26; i++){
		cin>>arr[i];
	}
	cin>>s;
	int m = s.length();
	for(int i = 0; i<m; i++){
		if(arr[((int) s[i]) - 97] > max){
			max = arr[((int) s[i]) - 97];
		}
	}
	cout<<max*m;
}
