#include<bits/stdc++.h>
using namespace std;
int main(){
map<pair<int,int>,string>m;
int o,n,p,q,i,j;
int x,y;
string s;
scanf("%d",&n);
for(i=1;i<=n;i++){

    cin>>x>>y>>s;
    m[make_pair(x,y)]=s;
}
scanf("%d",&o);

for(j=1;j<=o;j++){
    cin>>p>>q;
    cout<<m[make_pair(p,q)]<<endl;
}





return 0;
}
