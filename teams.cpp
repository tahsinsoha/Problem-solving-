#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,a;
vector<int>v;
cin>>t;
while(t--){
cin>>n;
for(int i= 0;i<n;i++ )
    {cin>>a;
    v.push_back(a);
    }
    sort(v.begin(),v.end());
    int minn=INT_MAX;
    for(int i=0;i<n-1;i++){
        minn=min(minn,(v[i+1]-v[i]));
    }
   // cout<<minn<<endl;
    if(minn>1) cout<<1<<endl;
    else cout<<2<<endl;
    v.clear();


}

return 0;
}
