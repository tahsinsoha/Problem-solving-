#include<bits/stdc++.h>
using namespace std;

int main()
{

     map<long long, long long >mp;
    long long n,p;

    cin>>n;
    for(int i=1; i<=n; i++)
    {

        cin>>p;
        mp[i-p]+=p;
    }
    long long amxx=0;
    for(auto m:mp)
    {
        amxx=max(amxx,m.second);
    }
    cout<<amxx<<endl;
    return 0;
}
