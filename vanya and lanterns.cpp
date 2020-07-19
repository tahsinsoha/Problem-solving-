#include<bits./stdc++.h>
using namespace std;
int main(){
long long n,l,pos;
cin>>n>>l;
long double arr[n+5];
for(long long i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
long double ans = 0;
for(long long i=1;i<n;i++){
ans = max(ans,arr[i]-arr[i-1]);
}
//ans = max (ans, l-arr[n-1]);

long double res;
res = ans/2;
if(arr[0]-0>res) res = arr[0]-0;
 if(l-arr[n-1]>res) res = l-arr[n-1];
//cout<<res<<endl;
cout<<setprecision(10)<<fixed<<res<<endl;
return 0;
}
