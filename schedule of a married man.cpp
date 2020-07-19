#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
char ch;
int a,b,c,d,e,f,g,h;
for(int i=1;i<=t;i++){
cin>>a>>ch>>b>>ch>>c>>ch>>d;
cin>>e>>ch>>f>>ch>>g>>ch>>h;
if(a>e&& c>g) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
else if(a<e&& c<g) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
else if(a==e){
        cout<<1<<endl;
    if(f<b && a==g && b>h) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
    else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(c==e){
    cout<<2<<endl;
    if(f>d ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(a==g){
    cout<<3<<endl;
        if(h<b ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;

}
else if(c==g){
    cout<<4<<endl;
  if(h<d ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;

}
else if(a==c && a==g){
    cout<<5<<endl;
if(b>f && b>h ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(c==e && c==g){
    cout<<6<<endl;
if(d>f && d>h ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(e==a && e==c){
    cout<<7<<endl;
if((f>b && f>d) ||(f<b&&f<d) ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(e==a && e==c){
    cout<<8<<endl;
if((f>b && f>d) ||(f<b&&f<d) ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(g==a && g==c){
    cout<<9<<endl;
if((b<h && d<h) ||(b>h&&d>h) ) cout<<"Case "<<i<<":"<<" Hits Meeting"<<endl;
     else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(e>a && e<c){
cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else if(g>a && g<c){
    cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}
else cout<<"Case "<<i<<":"<<" Mrs Meeting"<<endl;
}

return 0;
}
