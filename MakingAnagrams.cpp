#include <bits/stdc++.h>
using namespace std;

int main(){
	string str1, str2;
	cin>>str1>>str2;
	int s = 0, ans = 0;
	int len1 = str1.length();
	int len2 = str2.length(); 
	for(int i = 0; i<len1; i++){
		for(int j = 0; j<len2; j++){
			if(str1[i] == str2[j]){
				s++;
				str2[j] = '.';
				str1[i] = '.';
			}
		}
	}
	for(int i = 0; i<len1; i++){
		if(str1[i] != '.'){
			ans++;
		}
	}
	for(int j = 0; j<len2; j++){
		if(str2[j] != '.'){
			ans++;
		}
	}
	cout<<ans;
}
