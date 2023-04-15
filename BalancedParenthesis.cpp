#include <bits/stdc++.h>
	using namespace std;
    #include<string>

    int main(){
        string string1;
        cin>>string1;
        
        int count1 = 0, count2 = 0, len;
        len = string1.length();
        for(int i = 0; i<len; i++){
            if(string1[i] == '('){
                count1++;
            }else if(string1[i] == ')'){
                count2++;
            };
        }
        if( count1 == count2 ){
            cout<<"true";
        }
        else{
            cout<<"false";
        };

    }