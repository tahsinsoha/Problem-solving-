#include<bits/stdc++.h>
using namespace std;
int main(){
int h1,h2,m1,m2,m3,m4;
char c,c1;
cin>>h1>>c>>m1;
cin>>h2>>c1>>m2;
m1=m1+60*h1;
m2=m2+60*h2;
int ans= (m1+m2)/2;
printf("%02d:%02d",ans/60,ans%60);
return 0;
}
