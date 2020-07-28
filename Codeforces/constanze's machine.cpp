#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a,b,n,s;
    cin>>q;
    while(q--)
    {
        cin>>a>>b>>n>>s;
       int cnt = s/n;
       // cout<<cnt<<endl;
        int minn = min(a,cnt);
        int diff = s-(n*minn);
      //  cout<<diff<<endl;
        if(b>=diff)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
