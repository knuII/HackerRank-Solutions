#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    int max_left[n], max_right[n], min_array[n];
    int m_left = 0, m_right = 0, stored_water = 0;

    for(int i = 0; i<n; i++){
        cin>>array[i];
    }

    for(int i =0; i<n; i++){
        max_left[i] = m_left;
        if(array[i]>m_left){
            m_left = array[i];
        }
    }

    for(int i = n-1; i>=0; i--){
        max_right[i] = m_right;
        if(array[i]>m_right){
            m_right = array[i];
        }
    }


    for(int i = 0; i<n; i++){
        min_array[i] = min(max_left[i], max_right[i]);
    }
    
    for(int i = 0; i<n; i++){
        stored_water += max(0, min_array[i] - array[i]);
    }
    cout<<stored_water;

}