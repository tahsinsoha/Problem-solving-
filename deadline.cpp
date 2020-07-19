#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        long long n,d;
        cin>>n>>d;

        long long x;
        if(d<=n)
        {
            cout<<"YES"<<endl;
            continue;

        }

        for(int i=0; i<=n; i++)
        {
            x = i+  ((d+i)/(i+1));

            if(x<=n)
                break;
        }

        if(x<=n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}













