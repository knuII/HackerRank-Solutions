#include <bits/stdc++.h>
using namespace std;
//I AM SPEED
int main(){
	long N,M;
	cin>>N>>M;
	long S = 0;

	long arr[N + M][2];
	
	for(int i = 0; i<N+M; i++){
		for(int j = 0; j<2; j++){	
			cin>>arr[i][j];
		}
	}
	for(int i= N; i<N+M; i++){
		for(int j = 0; j<N; j++){
			if(arr[j][0] <= arr[i][1] && arr[j][1] >= arr[i][0]){
				S++;	
			}
		}
	}
	cout<<S;
}
