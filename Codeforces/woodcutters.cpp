#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        cin>>cs[i];
    }
    int ans=2;
    cs[1]=arr[1];


    for(int i=2; i<=n-1; i++)
    {
        if(cs[i-1]<arr[i]-cs[i])
            ans++, cs[i]=arr[i]; //left e felar try kortesi

        else if(arr[i+1]>cs[i]+arr[i]) //right e
            ans++,cs[i]+=arr[i];
        else
            cs[i]=arr[i]; //kothao feli nai

    }
    if(n==1)
        cout<<1<<endl;
    else
        cout<<ans<<endl;


    return 0;

}













