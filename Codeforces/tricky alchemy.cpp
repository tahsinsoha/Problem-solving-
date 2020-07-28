#include<bits/stdc++.h>
using namespace std;

int main(){
long long s,t;
long long y,g,b;
long long diff=0;

cin>>s>>t;

cin>>y>>g>>b;
long long v;

v= (y*2+g);;

if(v>s) diff+=(v-s);

long long w;
 w= b*3+g;
if(w>t)
 diff+= (w-t)
 ;

 cout<<diff<<endl;



return 0;
}
