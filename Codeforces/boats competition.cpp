#include<bits/stdc++.h>
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
        map<int,int>mpp;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            mpp[arr[i]]++;

        }
        sort(arr+1,arr+1+n);
        if(n==1)
            cout<<0<<endl;
        else if(n==2)
            cout<<1<<endl;

        else
        {

            int minn = arr[1]+arr[2];
            int maxx= arr[n]+arr[n-1];
            int mx = INT_MIN;
            for(int i=minn; i<=maxx; i++)
            {
                int t = 0;
                for(int j=1; j<=i/2; j++)
                {
                    if(j==(i-j))
                    {
                        t+= mpp[j]/2;

                    }
                    else
                        t+= min(mpp[j],mpp[i-j]);
                }
                mx=max(mx,t);



            }
            cout<<mx<<endl;

        }
    }



    return 0;

}












