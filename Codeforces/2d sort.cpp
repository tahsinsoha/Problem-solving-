#include<bits/stdc++.h>
int main(){
map<pair<int,int>,int>mapp;

int t,point,i,x,y;
vector<int>forx;
vector<int>fory;
scanf("%d",&t);
for(i=1;i<=t;i++){
scanf("%d",&point);
for(i=0;i<point;i++){
   scanf("%d%d",&forx[i],&fory[i]);
   mapp[make_pair(forx[i],fory[i])];
}
sort(forx.begin(),forx.end());
}
return 0;
}
