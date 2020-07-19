#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long mx=0;
long long arr[n+5];
long long sum=0;
for(int i=0;i<n;i++){
cin>>arr[i];
sum=sum+arr[i];
mx=max(mx,arr[i]);
}
if(sum%2==0 && mx<=(sum-mx) ) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
