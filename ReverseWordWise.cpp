#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<string>

int main(){
    string str1;
    getline(cin, str1);
    int len = str1.length();
    int noWrds = 0;
    for(int i = 0; i<len; i++){
       if(str1[i] == ' '){
            noWrds++;
       }
    }
    noWrds++;
    int j = 0;    
    vector<vector<char> >v1;

    for(int i = 0; i<len; i++){
        if(str1[i] == ' '){
            j++;
        }else{
            v1[j].push_back(str1[i]);        
        }
    }
    for(int i = 0; i<v1.size(); i++){
        for(int j = 0; j<v1[i].size(); j++){
            cout<<v1[i][j]<<" ";
        }
    }
}
