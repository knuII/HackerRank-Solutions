#include <bits/stdc++.h>
using namespace std;

int main() {
	int example;
	cin>>example;
	
	for(int i = 0; i<example; i++){
		int n, num, temp, count = 0;
		cin>>n;
		num = n;
		while(n!=0){
		temp = n % 10;
		if(temp != 0 && num % temp == 0){
			count++;
		}
		n = n / 10;
		}
		cout<<count<<endl;
	}
		
}
