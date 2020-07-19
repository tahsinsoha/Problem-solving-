#include<bits/stdc++.h>
using namespace std;
int main(){

long long int n,inp,sum=0;
vector<int>v,ans;
map<long long int, int>mpp;
cin>>n;
for(int i=0;i<n;i++){
cin>>inp;
v.push_back(inp);
sum=sum+inp;
mpp[v[i]]++;
}
for(int j=0;j<n;j++){
sum=sum-v[j];
mpp[v[j]]--;
if(sum%2==0&&mpp[sum/2]>0)
ans.push_back(j+1);
sum=sum+v[j];
mpp[v[j]]++;
}
cout<<ans.size()<<endl;
for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
return 0;
}
