#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long n,k,a;
    cin>>n>>k;
    vector<long long>v;
    v.push_back(1);
    for(long long i=1; i<=n; i++)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
   // cout<<v[k]<<v[k+1]<<endl;

    if(v[k]==v[k+1])
        cout<<-1<<endl;
    else
        cout<<v[k]<<endl;

    return 0;
}


