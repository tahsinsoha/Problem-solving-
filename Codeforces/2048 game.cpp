#include<bits/stdc++.h>
using namespace std;
int main(){
int q,a;
cin>>q;
while(q--){
    int n;
    cin>>n;
    int cnt[3000];
    memset(cnt,0,sizeof(cnt));
    vector<int>v;
   for(int i=0;i<n;i++){
    cin>>a;
    if(a>2048) continue;
       cnt[a]++;
   }
   for(int i=1;i<2048;i*=2) cnt[i*2]+=cnt[i]/2;
   if(cnt[2048]) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
return 0;
}
