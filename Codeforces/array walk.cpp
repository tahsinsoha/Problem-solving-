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
        int n,k,z;
        cin>>n>>k>>z;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }

        int maxx=INT_MIN;
        int sum=0;
        int piv=-1;

        for(int i=1; i<=k+1; i++)
        {
            sum+=arr[i];
            if(arr[i]>maxx)
            {
                maxx=arr[i];
                piv=i;
            }

        }
        int r=0,l=0;

        if(piv+1<=k+1 && arr[piv+1]>=arr[piv-1])
            piv=piv+1,r=1;
        else
            piv=piv-1,l=1;

        int sum2=0;

        //cout<<arr[piv]<<endl;
        // cout<<piv<<endl;
        if(r==1)
        {
            for(int i=1; i<=piv; i++)
            {
                sum2+=arr[i];
            }
            int p =min(z*2,(k-(piv-1)));

            int baki= k-((piv-1)+p);

            p=p/2;
            //  cout<<sum2<<endl;
            // cout<<p<<endl;
            int now;
            if((p)%2==1)
                sum2+=arr[piv]*p+arr[piv-1]*p,now=piv-1;
            else
                sum2+=arr[piv]*p+arr[piv-1]*p+arr[piv-1],now=piv;

            //cout<<sum2<<endl;

            for(int i=now+1; i<=baki; i++)
                sum2+=arr[i];
        }

        else
        {

            for( int i=1; i<=piv; i++)
            {
                sum2+=arr[i];
            }
            int p =min(z*2,(k-(piv-1)));
            int baki= k-((piv-1)+p);

            p=p/2;
            int now;

            if((p)%2==1)
                sum2+=arr[piv]*p+arr[piv+1]*p, now=piv+1;
            else
                sum2+=arr[piv]*p+arr[piv-1]*p+arr[piv+1],now=piv;

            for(int i=now+1; i<=baki; i++)
                sum2+=arr[i];



        }

        //cout<<sum<<" "<<sum2<<endl;

        cout<<max(sum,sum2)<<endl;

    }



    return 0;

}










