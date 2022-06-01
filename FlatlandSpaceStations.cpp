#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,min, max = 0;
	cin>>n>>m;
	int sst[m];
	int dist[n];
	for(int i = 0; i<m; i++){
		cin>>sst[i];
	}
	for(int j = 0; j<n; j++){
		min = 1000000;
		for(int i = 0; i<m; i++){
			if(abs(sst[i] - j) <= min){
				min = abs(sst[i] - j);
			}
		}
		dist[j] = min;
		if(min>max){
			max = min;
		}
	}
	cout<<max;
}
