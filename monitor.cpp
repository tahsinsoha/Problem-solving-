#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,x,y;
cin>>a>>b>>x>>y;
int g = __gcd(x,y);
x=x/g;
y=y/g;
//cout<<x<<y<<g<<endl;
int p1 = a/x;
int p2 = b/y;
//cout<<p1<<p2<<endl;

x = x* min(p1,p2);
y = y* min(p1,p2);
cout<<x<<" "<<y<<endl;

return 0;
}

