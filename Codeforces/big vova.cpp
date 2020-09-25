#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
int cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int maxx=0;
        int p=0;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]>maxx)
            {
                maxx=max(maxx,arr[i]);
                p=i;

            }

        }
        map<int,int>mpp;

        cs[1]=maxx;
        mpp[p]=1;
        for(int i=2; i<=n; i++)
        {
            int mx=0,ind=0;

            for(int j=1; j<=n; j++)
            {
                if(mpp[j])
                    continue;
                if(__gcd(maxx,arr[j])>mx)
                    ind=j,mx=__gcd(maxx,arr[j]);

            }
            mpp[ind]=1;

            cs[i]=arr[ind];
            maxx=__gcd(maxx,arr[ind]);
            //cout<<cs[i]<<endl;
            // cout<<ind<<endl;
        }

        for(int i=1; i<=n; i++)
            cout<<cs[i]<<" ";

        cout<<endl;


    }


    return 0;

}









