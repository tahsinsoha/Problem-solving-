#include<bits/stdc++.h>
using namespace std;
int main(){

int n,inp,contt=0;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++){
    cin>>inp;
    v.push_back(inp);
}
for(int j=1;j<n-1;j++){
    if(v[j]==0 and v[j+1]==1 and v[j-1]==1)
        v[j+1]=0,contt++;
}

cout<<contt<<endl;

return 0;
}
