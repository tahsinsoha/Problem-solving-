#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,inp,n,t,k,l,j,finall,ans;
    vector<long long int>v;
    for(i=0; i<=29; i++)
    {
        inp= pow(2,i);
        v.push_back(inp);
    }

//for(  l=0;l<v.size();l++) cout<<v[l]<<" ";
    cin>>t;
    for( j=1; j<=t; j++)
    {
        cin>>n;
        ans=(n*(n+1))/2;
        for(k=0; k<=v.size(); k++)
        {
            if(v[k]<=n)
                ans=ans-(2*v[k]);
            if(v[k]>n)
                break;
        }
        cout<<ans<<endl;
    }





    return 0;
}
