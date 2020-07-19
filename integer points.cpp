#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  t,n,p,m,q,jor1,bijor1,jor2,bijor2,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        jor1=0,jor2=0,bijor1=0,bijor2=0;
        for(long long  i=1; i<=n; i++)
        {
            cin>>a;
            if(a&1 )
                bijor1++;
            else
                jor1++;
        }
        cin>>m;
        for(long long  i=1; i<=m; i++)
        {
            cin>>b;
            if(b&1 )
                bijor2++;
            else
                jor2++;
        }
      cout<<jor1*jor2+bijor1*bijor2<<endl;
    }
    return 0;
}
