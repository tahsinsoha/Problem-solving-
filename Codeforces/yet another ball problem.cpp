#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long brr[1000007];
long long ps[1000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k;
    cin>>n>>k;
    long long z = k*(k-1);

    if(n>z)
        cout<<"NO"<<endl;

    else
    {
        cout<<"YES"<<endl;
        int f=0,cnt=0;

        for(int i=1; i<=k; i++)
        {
            for(int j=i+1; j<=k; j++)
            {

                cout<<i<<" "<<j<<endl;
                cnt++;
                if(cnt==n)
                {
                    f=1;
                    break;
                }
                cout<<j<<" "<<i<<endl;
                cnt++;

                if(cnt==n)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
                break;


        }

    }

    return 0;
}















