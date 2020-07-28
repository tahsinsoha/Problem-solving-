#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long n,s;

    cin>>n>>s;

    long long div = s/n;
    long long rem = s%n;

    for(int i=1; i<=n; i++)
    {
        arr[i]=div;
        if(i==n)
            arr[i]+=rem;
    }

    for(int i=1; i<=n; i++)
    {
        cs[i]=cs[i-1]+arr[i];
    }

    for(int i=n; i>=1; i--)
    {
        ps[i]=ps[i+1]+arr[i];
    }

    set<int>st;

    for(int i =1; i<=n; i++)
    {

        if(cs[i]<=(s) || (s-cs[i])<=s)
            st.insert(cs[i]);
        if(ps[i]<=(s) || (s-ps[i])<=s)
            st.insert(ps[i]);
    }

    long long p=0;
    long long k;
    int f=0;
    for(auto i:st)
    {
        p++;
        if(i!=p)
        {
            k=p;
            f=1;
            break;
        }

    }

    if(f==0 )
        cout<<"NO"<<endl;

    else
    {


        cout<<"YES"<<endl;
        for(int i=1; i<=n; i++)
        {

            cout<<arr[i]<<" ";
        }

        cout<<endl;

        cout<<k<<endl;
    }

    return 0;

}







