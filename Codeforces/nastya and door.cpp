#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
long long int cs[200007];
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        long long   int n,k;
        cin>>n>>k;
        // k=k-1;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        for(int i=1; i<=n; i++)
        {
            brr[i]=0;
            cs[i]=0;
        }
        for(int i=2; i<=n-1; i++)
        {
            if ((arr[i]> arr[i-1]) && (arr[i]>arr[i+1]) )
                brr[i]=1;

        }

        for(int i=1; i<=n; i++)
        {
            // cs[i]=cs[i-1]+brr[i];

            if(brr[i]==1)
            {
                cs[i]=cs[i-1];
                cs[i+1]=cs[i]+1;
                i++;
            }

            else
                cs[i]= cs[i-1];

        }

        int maxx = INT_MIN;
        int last = -1;
        for(int i=1; i<=n-k+1; i++)
        {

            if ((i+k-1) <=n)
            {
                if (brr[i]!=1){
                   if ( (cs[i+k-1]-cs[i]) >maxx)

                {
                    last = i;
                    maxx= cs[i+k-1] - cs[i];
                    // cout<<last<<" "<<maxx<<endl;
                    //  cout<<cs[i]<<" "<<cs[i+k-1]<<endl;

                }

            }

            }

        }
        if(maxx==0)
            cout<<1<<" "<<1<<endl;
        else
            cout<<maxx+1<<" "<<last<<endl;

    }

    return 0;
}



