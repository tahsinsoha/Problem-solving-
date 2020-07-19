#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,r;
cin>>n>>m>>r;
int a,b,minn=1000000000,maxx=0,ans;
for(int i=0;i<n;i++){
    cin>>a;
minn=min(minn,a);

}
for(int i=0;i<m;i++){
    cin>>b;
maxx=max(maxx,b);

}

if(minn>=maxx) {
    cout<<r<<endl;
    return 0;
}
else {
    int temp = r/minn;
    int tempp = r%minn;
    int neww = temp* maxx;
     ans = neww+tempp;
}
cout<<ans<<endl;

return 0;
}
