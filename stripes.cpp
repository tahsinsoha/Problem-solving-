#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a;
cin>>n;
int arr[n+7];
long long int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
long long ns=0;
int cnt=0;
for(int i=0;i<n-1;i++){
ns+=arr[i];

if(ns==(sum-ns))
    cnt++;
}

cout<<cnt<<endl;

return 0;
}
