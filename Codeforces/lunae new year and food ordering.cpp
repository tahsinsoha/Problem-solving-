#include<bits/stdc++.h>
#define N 300010
# define pii pair<int,int>


using namespace std;
typedef long long ll;
int n,m,t,d;
int a[N], c[N] ;
ll ans =0 ;
priority_queue<pii, vector<pii>, greater<pii> > pq;
int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++){
        cin>>c[i];
    pq.push(make_pair(c[i], i));
}
for(int i=1; i<=m; i++)
{
    cin>> t>> d;
    if(d<=a[t])
    {
        a[t]=a[t]-d;
        cout<<1ll*d*c[t]<<endl;
    }
    else
    {
       int flag=0;
       ll ans = 1ll* a[t] *c[t];
       d= d- a[t];
        a[t]=0;
        while(!pq.empty()){
           while(!pq.empty() && a[pq.top().second]==0 ) pq.pop();
           if(pq.empty()) break;
           pii now = pq.top();
           if(d<= a[now.second]){
            a[now.second] = a[now.second] - d;
            ans = ans+ 1ll * d * now.first;
            flag = 1;
            cout<<ans<<endl;
            break;

           }
           else {

            ans =ans + 1ll * a[now.second] * now.first;
           d= d- a[now.second];
           a[now.second] = 0;
           pq.pop();
           }
        }
        if(flag== 0 ) cout<<"0"<<endl;
    }
}

return 0;
}
