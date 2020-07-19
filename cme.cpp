#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
long long a;
cin>>t;
while(t--){
cin>>a;
if( a==2 ) cout<<2<<endl;
else if (a%2 != 0) cout<<1<<endl;
else cout<<0<<endl;
}

return 0;
}
