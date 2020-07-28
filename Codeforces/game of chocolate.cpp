#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
ll a,b,c,d;
cin>>t;
//3 5 4 5
for(int i=1;i<=t;i++){
    cin>>a>>b>>c>>d;
    ll sum1= a+b;
    ll sum2 = c+d;
ll p = sum1*(sum2+1);
ll q = a*(c+1);
ll r = b*(d+1);
ll sum = q+r;
if(sum==0 || p==0){
printf("Case %d: 0\n",i);
continue;
}
ll g = __gcd(sum,p);
ll fin1 = sum/g;
ll fin2 = p/g;
printf("Case %d: %lld/%lld\n",i,fin1,fin2);

}
return 0;
}

