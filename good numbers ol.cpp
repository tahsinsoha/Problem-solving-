#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
int t;
cin>>t;
while(t--){

    cin>>a>>b;
    if(__gcd(a,b)==1) cout<<"Finite"<<endl;
    else cout<<"Infinite"<<endl;
}

return 0;
}
