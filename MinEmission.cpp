#include <bits/stdc++.h>
using namespace std;

int main(){
	int T, N, Q, L, R, X, Y;
	cin>>T;
	for(int i = 0; i<T; i++){
		cin>>N;
		int arr[N];
		for(int j = 0; j<N; j++){
			cin>>arr[j];	
		}
		cin>>Q;
		for(int j = 0; j<Q; j++){
			cin>>L>>R>>X>>Y;
			int brr[R-L+1];
			for(int k = 0; k<=R-L; k++){
				brr[k] = arr[L+k-1];
			}
            int ss = sizeof(brr) / sizeof(brr[0]);
            sort(brr,brr+ss);
           
            int min1 = 0,min2 = 0;
            for(int z = 0; z < X ; z++){
                min1 += brr[z];
            }
            
            for(int d = 0; d < Y; d++){
                min2 += brr[d];
            }       
             if(min1 < min2){
                 cout<<min1<<" ";
             }
             else{
                 cout<<min2<<" ";
             }
         
		}
	}
}
