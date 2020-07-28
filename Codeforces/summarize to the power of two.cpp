#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int> :: iterator it, it2;
int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int a;
    cin>>a;
    mp[a]++;
}
int ans =0;
for(it = mp.begin(); it!= mp.end();it++){
    bool f=0;
    for(int i=0;i<33;i++){
        if(f) break;
        int tot = pow(2,i);
        if(tot>=it->first){
            int rem = tot - it->first;
            it2 = mp.find(rem);
            if(mp[rem]>=2 or (mp[rem]==1 && rem!=it-> first))
                f=1;
        }
    }
    if(!f) ans+=it->second;
}
cout<<ans<<endl;

return 0;
}
