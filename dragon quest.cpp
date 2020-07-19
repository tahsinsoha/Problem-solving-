#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;

    cin>>t;
    long long int x,n,m;
    while(t--)
    {
        long long sum=0;
        int flag=0;
        cin>>x>>n>>m;
        long long v=x;

        for(int i=1; i<=m; i++)
        {
            if(x<=0)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }

            x= x-10;

            // cout<<x<<endl;
        }

        if(flag==1)
            continue;

        for(int i=1; i<=n; i++)
        {
            if(x<=0)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }

            x= (x/2) +10;
            //cout<<x<<endl;
        }

        if(flag==1)
            continue;

        if(x<=0)
        {
            cout<<"YES"<<endl;
            continue;
        }

        else
        {
            x=v;

            for(int i=1; i<=n; i++)
            {
                if(x<=0)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }

                x= (x/2) +10;
                //cout<<x<<endl;
            }

            if(flag==1)
                continue;

            if(flag!=1)
            {
                for(int i=1; i<=m; i++)
                {
                    if(x<=0)
                    {
                        cout<<"YES"<<endl;
                        flag=1;
                        break;
                    }

                    x= x-10;

                    //cout<<x<<endl;
                }

            }

        }

        if(flag==1)
            continue;

        if(x<=0)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;

    }
    return 0;
}



