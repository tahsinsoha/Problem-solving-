#include<bits/stdc++.h>
using namespace std;
int main(){
int n,inp,ans;
vector<int>v;
cin>>n;

for(int i=1;i<=8;i++){
inp=(pow(2,i)-1)*(pow(2,(i-1)));
v.push_back(inp);
}
for(int i=0;i<8;i++){
    if(n%v[i]==0) ans=v[i];
}
cout<<ans<<endl;


return 0;
}
