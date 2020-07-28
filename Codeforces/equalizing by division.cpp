#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,a,cnt;
vector<int>v;
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>a;
v.push_back(a);
}
sort(v.begin(),v.end());
long long ans = 2e9;
for(int x=0;x<200001;x++){
        cnt = 0;
        long long now =0;
        // long long  int st=0;
    for(int i=0;i<n && cnt<k;i++){
        if(v[i]<x) continue;
        else if(v[i]==x) cnt++;
        else {
                long long  st=0;
            int tmp = v[i];
            while(tmp>x) tmp=tmp/2,st++;
               if(tmp==x) now = now+st, cnt++;
        }
    }
    if (cnt==k)
        ans = min(ans,now);
}
cout<<ans<<endl;
return 0;
}
