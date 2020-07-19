#include<bits/stdc++.h>
using namespace std;
int main(){
int q,c,m,x,nnn;
cin>>q;
while(q--){
    cin>>c>>m>>x;
   if(c==0||m==0) cout<<0<<endl;

   else cout<<min((min(c,m)),((c+m+x)/3))<<endl;
}
return 0;
}
