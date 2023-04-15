#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s1;
    cin>>s1;
    
    int n = s1.length();
    int flag = 0;

    for(int i = 0; i<n/2; i++){
        if(s1[i] != s1[n-(i+1)]){
            flag = -1;
        }
    }
    if(flag == -1){
        cout<<"false";
    }else{
        cout<<"true";
    }

}