#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,maxx=0,x,y;
cin>>n>>m;
for(int i=1;i<=n;i++){
    cin>>x>>y;
    if(x>maxx) return puts("NO");
    else maxx=max(maxx,y);
}
if(m>maxx)  cout<<"NO"<<endl;
else  cout<<"YES"<<endl;
return 0;
}
