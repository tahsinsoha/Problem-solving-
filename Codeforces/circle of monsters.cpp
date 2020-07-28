#include<bits/stdc++.h>
using namespace std;
 long long int arr[3000007], brr[3000007];
int main()
{
ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
     scanf("%d",&t);
    long long int n;


    while(t--)
    {
       scanf("%lld",&n);

        for(int i=0; i<n; i++)
        {
             scanf("%lld%lld",&arr[i],&brr[i]);
        }

        long long minn=1e18;


        long long sum=0;


        for(int i=0; i<n; i++)
        {
            sum+= max(0LL, arr[i]-brr[(i+n-1)%n]);

            minn=min(minn, arr[i]-max(0LL, arr[i]-brr[(i+n-1)%n]));



        }

       printf("%lld\n",sum+minn);
    }


    return 0;



    }
