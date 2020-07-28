#include<bits/stdc++.h>
using namespace std;
int main(){
int t,q;
cin>>q;
int x,y,a,b,c,d;
int m= 1e5;
int maxx,minx,maxy,miny;
while(q--){
cin>>t;
maxx=m,maxy=m,minx=-m,miny=-m;
while(t--)
{
    cin>>x>>y>>a>>b>>c>>d;
if(!a) minx=max(minx,x);
if(!b) maxy=min(maxy,y);
if(!c) maxx=min(maxx,x);
if(!d) miny=max(miny,y);


}
if(minx>maxx || miny>maxy){
    cout<<0<<endl;
}
else {
    cout<<1<<" "<<maxx<<" "<<maxy<<endl;
}
}


return 0;
}
