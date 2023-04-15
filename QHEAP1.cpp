#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m;
	cin>>t;
	vector<int> vec1;
	vector<int> vec2;
	vector<int>::iterator it;
	for(int i = 0; i<t; i++){
		cin>>n;
		if(n == 1){
			cin>>m;
			vec1.push_back(m);
		}
		else if(n == 2){
			cin>>m;
			for(int j = 0; j<vec1.size(); j++){
				if(vec1[j] == m){
				it = vec1.begin();
				vec1.erase(it +j - 1);
			}
			}
		}
		else if(n == 3){
			int small = 100000;
			for(int j = 0; j<vec1.size(); j++){
				if(vec1[j] <= small){
					small = vec1[j];
				}
			}
			vec2.push_back(small);
		}
	}
	for(int i = 0; i<vec2.size(); i++){
		cout<<vec2[i]<<endl;
	}
}
