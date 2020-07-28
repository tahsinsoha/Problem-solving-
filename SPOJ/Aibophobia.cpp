#include<bits/stdc++.h>
using namespace std;
string s;
int p;
int dp[6110][6110];
int vis[6110][6110];
int rec(int l,int r){
if(l>=r) return 0;
if(vis[l][r]==p) return dp[l][r];
int q1= INT_MAX, q2= INT_MAX,q3= INT_MAX;
if(s[l]==s[r]) q1=rec(l+1,r-1);
else {
    q2=1+rec(l+1,r);
    q3= 1+rec(l,r-1);
}
vis[l][r]=p;
return dp[l][r]=min(q1,min(q2,q3));
}
int main(){
int t;
cin>>t;
while(t--){
        p++;
    cin>>s;
    cout<<rec(0,s.size()-1)<<endl;

}

return 0;
}
