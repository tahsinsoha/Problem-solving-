#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,inp,sum=0;

vector<long long int>v;
cin>>n;
for(int i=0;i<n;i++){
    cin>>inp;
    v.push_back(inp);
}
sort(v.begin(),v.end());
for(int j=0;j<n;j++){
    sum=sum+(j+2)*v[j];
}
cout<<sum-v[n-1]<<endl;
return 0;
}
