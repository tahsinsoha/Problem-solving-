#include<bits/stdc++.h>
using namespace std;
long long int x,y,d;
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
long long int a,b;
while(cin>>a>>b){
    if(a==0) swap(a,b);
    euclid(a,b);
    cout<<x<<" "<<y<<" "<<d<<endl;
}

return 0;
}
