#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n%2)
        {

            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if((i==(n+1)/2 && j==1) || (j==(n+1)/2 && i==1))
                        cout<<1<<" ";

                    else if(i==j || j==(n+1-i))
                        cout<<1<<" ";

                    else
                        cout<<0<<" ";
                }

                cout<<endl;
            }

        }

        else
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    if(i==j || j==(n+1-i))
                        cout<<1<<" ";

                    else
                        cout<<0<<" ";
                }

                cout<<endl;
            }

        }

    }


    return 0;

}














