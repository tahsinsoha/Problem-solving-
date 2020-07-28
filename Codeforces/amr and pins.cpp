#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
ull Pow (ull x,ull y){
ull res=1;
while(y>0){
    if(y&1)
        res*=x;
    x*=x;
    y>>=1;
}
return res;
}
int main(){
double r,x,y,x1,y1,ans,result;
cin>>r>>x>>y>>x1>>y1;

x= Pow(abs(x-x1),2);
y= Pow(abs(y-y1),2);
ans= sqrt(x+y);
//cout<<ans<<endl;
result = (int)ceil(ans/(2*r));
//if(ans!=0) ans=int(ans-1);
cout<<result<<endl;
return 0;
}
