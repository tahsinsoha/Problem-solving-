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
        int n,k;
        cin>>n>>k;

        for(int i=1;i<=n;i++)
            cin>>arr[i];

        sort(arr+1,arr+1+n);
        long long sum=0;

        for(int i=2;i<=n;i++)
        {

            sum+= (k-arr[i])/arr[1];

        }

        cout<<sum<<endl;




    }


    return 0;

}














