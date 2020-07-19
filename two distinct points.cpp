#include<bits/stdc++.h>
using namespace std;
int main(){
long long int l1,r1,l2,r2;
int t;
cin>>t;
while(t--){
        cin>>l1>>r1>>l2>>r2;
cout<<l1<<' ';
if(l1==l2) cout<<r2<<endl;
else cout<<l2<<endl;
}
return 0;
}
