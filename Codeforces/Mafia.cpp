#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
long long arr[n+5];
long long sum=0;
long long maxx=-1;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
    maxx=max(maxx,arr[i]);
}
long long ans;
ans = max(maxx, sum/(n-1)+(sum%(n-1)!=0));
cout<<ans<<endl;
return 0;
}
