#include<bits/stdc++.h>
using namespace std;
int l[100010];
int r[100010];
int main(){
int n;
cin>>n;
int L=0,R=0;
for(int i=1;i<=n;i++){
    cin>>l[i]>>r[i];
    L= L+l[i];
    R=R+r[i];

}
int ans =abs(L-R);
int ind=-1;
for(int i=1;i<=n;i++){
    int t;
    t=abs(L-R+2*r[i]-2*l[i]);
    if(t>ans) ans=t, ind=i;
}
if(ind==-1) cout<<0<<endl;
else cout<<ind<<endl;
return 0;
}
