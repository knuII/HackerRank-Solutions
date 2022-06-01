#include <bits/stdc++.h>
using namespace std;

int main(){
	long long p, q, d, s, l, r, c, count = 0;
	cin>>p>>q;
	for(long long i = p; i<=q; i++){
		
		d = 0;
		c = i;
		while(c!=0){
			d++;
			c = c/10;
		}
		long long arr[d];
		r = 0;
		s = i * i;
		l = s/ pow(10,d);
		for(long j = d-1; j>=0; j--){
			arr[j] = s%10;
			s=s/10;
		}
		for(long j = 0; j<d; j++){
			r = (r * 10) + arr[j];
		}
		if((l+r) == i){
			cout<<i<<" ";
			count++;
		}
	}
	if (count == 0){
		cout<<"INVALID RANGE";
	}
}
