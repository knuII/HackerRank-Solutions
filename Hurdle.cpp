#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, h, shots, max = 0;
	cin>>n>>h;
	int hurdles[n];
	for(int i = 0; i<n; i++){
		cin>>hurdles[n];
		if (hurdles[n]>=max){
			max = hurdles[n];
		}
	}

    if(max<=h){
    	shots = 0;
	}else{
		shots = max - h;
	}
	cout<<shots;
}
