#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s;

    cin>>n>>s;
    long long arr[n+5],brr[n+5];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    long long l=0,h=n, m, sum=0,ans=0,cost;

    while(l<=h)
    {
        m=(l+h)/2;
        for(int i=0; i<n; i++)
            brr[i] = arr[i]+(i+1)*m;
        sum=0;

        sort(brr,brr+n);

        for(int i=0; i<m; i++)
            sum+=brr[i];

        if(sum<=s)
        {
            cost=m;
            ans=sum;
            l=m+1;
        }
        else
        {
            h=m-1;
        }

    }
    cout<<cost<<" "<<ans<<endl;
    return 0;
}
