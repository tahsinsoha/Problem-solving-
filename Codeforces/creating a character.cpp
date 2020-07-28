#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long s,i,e;
       cin>>s>>i>>e;

        long long ans = (s+e-i+1)/2;
        ans = min(e,ans);

        if(s>i+e) ans++;

        cout<<max(0LL,ans)<<endl;
    }

    return 0;
}




