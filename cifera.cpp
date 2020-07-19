#include<bits/stdc++.h>
using namespace std;
int main(){

long long int k,l;
cin>>k>>l;
long long int ans,cont=0;
ans=k;
while(ans<l){
ans=ans*k;
cont++;
}
if(ans==l) {cout<<"YES"<<endl;cout<<cont<<endl;}
else cout<<"NO"<<endl;
return 0;
}
