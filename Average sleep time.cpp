#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,k;
long long int ans=0;
cin>>n>>k;
int arr[n+1];
long long int cums[n+1];
cums[0]=0;
for(int i=0;i<n;i++){
    cin>>arr[i];

cums[i+1]=cums[i]+arr[i];
}
for(int i=0;i<=(n-k);i++){
    ans=ans+cums[i+k]-cums[i];
}
 double fin= (double)ans/(n-k+1);
cout<<std::fixed;
cout<<setprecision(10)<<fin;
return 0;
}
