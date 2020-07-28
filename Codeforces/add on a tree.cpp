#include<bits/stdc++.h>
using namespace std;
vector<int> v[100010];
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++){
        int x,y;
    cin>>x>>y;
v[x].push_back(y);
v[y].push_back(x);
}

int flag = 0;
for(int i=1;i<=n;i++){
    if(v[i].size()==2){
        flag=1;
        break;
    }
}
if(flag==1) cout<<"NO"<<endl;
else cout<<"YES"<<endl;
return 0;
}
