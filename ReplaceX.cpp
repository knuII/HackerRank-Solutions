#include <bits/stdc++.h>
#include <vector>
#include<string>
using namespace std;

int main(){
    string str1;
    cin>>str1;
    int n = str1.length();
    
    vector<char> vec1;
    for(int i = 0; i<n; i++){
        vec1.push_back(str1[i]);
    }
    
    
    
    vector<char>::iterator it;
    it = vec1.begin();
    for(auto it = vec1.begin(); it != vec1.end(); it++){
        if (*it == 'x'){
            vec1.erase(it);
            it--;
        }
    }
    int m = vec1.size();
    for(int i = 0; i<m; i++){
        cout<<vec1[i];
    }
}