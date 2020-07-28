#include<bits/stdc++.h>
using namespace std;
long long int x,y,d;
long long int n,k,t,ans1,ans2;
void euclid(long long int a,long long int b){
if(b==0) {
    x=1;
    y=0;
    d=a;
    return;
}
euclid(b,a%b);
long long int x1,y1;
x1=y;
y1= x-(a/b)*y;
x=x1;
y=y1;
}
int main(){
cin>>t;

while(t--){
    cin>>n>>k;
    euclid(n/k,ceil(1.0*n/k));
x = x* (n/d);
y = y* (n/d);
cout<<x<<" "<<y<<endl;
}

return 0;
}
