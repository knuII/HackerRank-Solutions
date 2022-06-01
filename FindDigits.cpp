#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, num, temp, div, x;
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>num;
		div = 0;
		temp = num;
		while(temp>0){
			x = temp % 10;
			if (x!= 0 &&num % x == 0){
				div++;
			}
			temp = temp/10;
		}
		cout<<div<<endl;
	}
}
