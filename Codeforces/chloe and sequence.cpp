#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
long long ans=1;
while(k%2==0){
    k=k/2;
    ans++;
}
cout<<ans<<endl;
return 0;
}

