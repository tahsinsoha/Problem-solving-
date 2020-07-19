#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>graph[100005];
    int x,y,p=0,q=0,r=0,n,e;
cin>>n>>e;
for(int i=1;i<=e;i++){
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
}
for(int i=1;i<=n;i++){
    if(graph[i].size()==1) p++;
    if(graph[i].size()==2) q++;
    if(graph[i].size()==n-1) r++;
}
//cout<<p<<q<<r<<endl;
if(p==2&&q==(n-2)) {
    cout<<"bus topology"<<endl;
    return 0;
}
if(q==n){
    cout<<"ring topology"<<endl;
    return 0;
}
if(r==1&&p==(n-1)){
    cout<<"star topology"<<endl;
    return 0;
}
else {
    cout<<"unknown topology"<<endl;
    return 0;
}

return 0;
}
