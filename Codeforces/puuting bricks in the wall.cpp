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

        string s;

        char a,b,c,d;

        for(int i=1; i<=n; i++)
        {
            cin>>s;

            if(i==1)
                a = s[1];
            if(i==2)
                b = s[0];

            if(i==n-1)
                c=s[n-1];

            if(i==n)
                d=s[n-2];

        }

        if(a==b)
        {
            if(c==d && b==c)
            {
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n<<" "<<n-1<<endl;

            }

            else if(c==d && c!=b)
            {
                cout<<0<<endl;
            }

            else
            {
                cout<<1<<endl;
                if(c==a)
                    cout<<n-1<<" "<<n<<endl;
                else
                    cout<<n<<" "<<n-1<<endl;
            }
        }

        else
        {

            if(c==d)
            {
                cout<<1<<endl;
                if(c==a)
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;

            }

            else
            {
                cout<<2<<endl;
                if(c!=a)
                {
                    cout<<1<<" "<<2<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }

                else if(c!=b)
                {
                    cout<<2<<" "<<1<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }
            }


        }

    }


    return 0;

}













