#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k;
cin>>n>>k;
long long sum;
sum=(n*(n+1))/2;
long long int ans=0;
long long rs= n+1;
while(sum!=k){
        ans++;
sum=sum-rs;
rs--;
}

cout<<ans<<endl;
return 0;
}
