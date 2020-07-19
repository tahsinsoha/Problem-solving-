#include<bits/stdc++.h>
using namespace std;
int main(){
int t;


map<long long, long long>mp;
long long n,s,k,a;
cin>>t;
while(t--){
    cin>>n>>s>>k;
for(int i=1;i<=k;i++){
    cin>>a;
    mp[a]=1;
}
long long b=s,p=s;
//cout<<mp[b]<<endl;
while(1){
    if(mp[b]!=1 && b>0){
        cout<<abs(s-b)<<endl;
        break;
    }
    else if(mp[p]!=1 && p<=n)
    {
        cout<<abs(p-s)<<endl;
        break;
    }
    b--,p++;

}

mp.clear();
}


return 0;
}
