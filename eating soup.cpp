#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
//if(m<=(n/m)) cout<<m<<endl;
 if (m==0) cout<<1<<endl;
else  if(m<=(n/2)) cout<<m<<endl;
else cout<<n%m<<endl;
return 0;
}

