#include<bits/stdc++.h>
using namespace std;
int main(){
int n,inp;
cin>>n;
vector<int>graph[n];
int par[n+1],leaf[n+1];
memset(par,0,sizeof(par));
memset(leaf,0,sizeof(leaf));
for(int i=1;i<n;i++){
cin>>inp;
leaf[inp]=1;
graph[inp].push_back(i+1);
par[i+1]=inp;
vector<int>::iterator it;
it = find(graph[par[inp]].begin(),graph[par[inp]].end(),inp);
//int indx= lower_bound(graph[par[inp]].begin(),graph[par[inp]].end(),inp);
int indx = it - graph[par[inp]].begin();

if(it!= graph[par[inp]].end())graph[par[inp]].erase(graph[par[inp]].begin()+indx);
//leaf[inp]=0;

}
//cout<<graph[1].size();
//cout<<graph[3].size();
for(int i=1;i<=n;i++){
    if(graph[i].size()<3 and leaf[i]==1) {
          //  cout<<i<<" ";
        cout<<"No"<<endl;
        return 0;
    }
}
cout<<"Yes"<<endl;
return 0;
}
