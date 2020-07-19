#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int n;
    cin>>n;
    stack<int>st;

    for(int i=1; i<=n; i++)
    {
        st.push(i);
    }
    if(n%2==0)
    {

        if((n/2)%2)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    else
    {
        if(n%4==1)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
       if(n%2==0 || n%4==1) cout<<(n/2)<<" ";
       else cout<<(n+1)/2<<endl;
    for(int i=n-1; i>=1; i--)
    {

        cout<<i<<" ";
        if(i-1>=1)
            cout<<i-1<<" ";

        i-=3;
    }
    return 0;
}















