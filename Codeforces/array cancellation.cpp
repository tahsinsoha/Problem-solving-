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

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        long long int sum=0;

        for(int i=1; i<=n; i++)
        {

            if(arr[i]>0)
                sum+=arr[i];

            else
                sum-=min(abs(arr[i]),sum);
        }

        cout<<sum<<endl;
    }


    return 0;

}










