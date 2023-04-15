#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main() {
    float n, m, x;
    cin>>n;
    
    vector <float> v1;
    for(int i = 0; i<n; i++){
        cin>>x;
        v1.push_back(x);
    }
    
    cin>>m;
    for(int j = 0; j<m; j++){
        cin>>x;
        v1.push_back(x);
    }
    int vec_size = v1.size();
    
    if (vec_size % 2 == 0){
        float med = ((v1[vec_size/2] + v1[(vec_size/2) -1])/2);
        cout<<med;
    }
    else{
        float med = v1[ceil(vec_size/2)];
        cout<<med<<".0";
    }
    return 0;
}
