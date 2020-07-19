#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
char ch;
int i;
for( i=1;i<=t;i++){
        int a,b,c,d,e,f,g,h,h1,h2,h3,h4;
 scanf("%d:%d %d:%d", &a,&b,&c,&d);
  scanf("%d:%d %d:%d",&e,&f,&g,&h);
  a = a*60 + b;
  c= c*60 + d ;
  e = e*60 + f;
g = g*60 + h;
if(e>c||a>g)
    cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
    else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;

}
return 0;
}
