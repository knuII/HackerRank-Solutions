#include <bits/stdc++.h>
using namespace std;

int main(){
	int s,q;
	
	cin>>s;
	string str[s];
	for(int i = 0; i<s; i++){
		cin>>str[i];
	}
	cin>>q;
	string qr[q];
	for (int j = 0; j<q; j++){
		cin>>qr[j];
	}
	for(int j = 0; j<q; j++){
		int total = 0;
		for(int i = 0; i<s; i++){
			if(str[i] == qr[j]){
				total = total + 1;	
			}
		}
		cout<<total<<endl;
	}
}
