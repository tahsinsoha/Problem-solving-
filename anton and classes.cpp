#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int end1=INT_MAX, end2= INT_MAX, st1 = INT_MIN, st2=INT_MIN;
    int u,v;
    for(int i=0; i<n; i++)
    {
        cin>>u>>v;
        end1 = min(end1,v);
        st1 = max(st1,u);
    }

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>u>>v;
        end2 = min(end2,v);
        st2 = max(st2,u);
    }
int ans = max( st2-end1 , st1-end2);
if(ans<0) ans=0;

cout<<ans<<endl;

    return 0;
}

