#include<bits/stdc++.h>
using namespace std;
map<int,int>remain;
map<int,int>cost;
int main(){
int n,m,x,y,kind,num;
cin>>n>>m;
for(int i=1;i<=n;i++){
        cin>>x;
          remain[i]=x;
}
for(int i=1;i<=n;i++){
    cin>>y;
    cost[i]=y;
}
for(int i=1;i<=m;i++){
    cin>>kind>>num;


}

return 0;
}
