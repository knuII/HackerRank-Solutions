#include <bits/stdc++.h>
using namespace std;


bool isDe(vector<int>& temp){
	for(int i = 0; i<temp.size()-1; i++){
		if(temp[i]<temp[i+1]){
			return false;
		}
	}
	return true;
}
int main(){
	int n, count=0;
	cin>>n;
	vector<int> plants;
	for(int i = 0; i<n; i++){
		int x;
		cin>>x;
		plants.push_back(x);
	}
	if(isDe(plants) == true){
		cout<<0;
		return 0;
	}
	bool flag = false;
	while(flag == false){
		count++;
		vector<int> temp;
		for(int i = 0; i<plants.size()-1; i++){
			if(plants[i] < plants[i+1]){
				temp.push_back(i+1);
			}
		}
		reverse(temp.begin(), temp.end());
//		for(int i=0;i<temp.size();i++){
//			cout<<temp[i]<<" ";
//		}cout<<"\n";
		for(int i = 0; i<temp.size(); i++){
//			cout<<"HELLO"<<" "<<i<<"\n";
			plants.erase(plants.begin() + temp[i]);
//			cout<<"HELLO2"<<" "<<i<<"\n";
		}
//		cout<<"HELLO"<<"\n";
		if(isDe(plants) == true){
			flag = true;
		}
		
		
	}

	cout<<count;
	
}
