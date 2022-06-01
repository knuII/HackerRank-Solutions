#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, steps;
	cin>>n;
	string arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
		
	for(int i = 0; i<n; i++){
		steps = 0;
		string x = arr[i];
		int y = x.length();
		if(y % 2 == 0){
			for(int j = 0; j<y/2; j++){
				if((int) x[j] != (int) x[y-(j+1)]){
					steps += abs(int((int) x[y-(j+1)] - (int) x[j]));
				}
			}
			cout<<steps<<endl;
		}
		else if(y % 2 != 0){
			for(int j = 0; j<y/2; j++){
				if((int) x[j] != (int) x[y-(j+1)]){
					steps += abs(int((int) x[y-(j+1)] - (int) x[j]));
				}
			}
			cout<<steps<<endl;
		}
	}
}
