#include <bits/stdc++.h>
using namespace std;

const int n_max=300005;
int n,m,i,j,x,k,ans,cur;
vector<int> v;



int main()
{scanf("%d",&n);
 for(i=1;i<=n;i++){
    scanf("%d",&x);
    v.push_back(x);
 }
 sort(v.begin(),v.end());

 k=0;
 while(k<v.size()){
    ans=(int)v.size()-k;
    cur+=(v[k]-cur);


    while(k<v.size() && v[k]-cur<=0)k++;

    printf("%d\n",ans);
   // system("pause");
 }
}
