#include<bits/stdc++.h>
using namespace std;
int arr[207],cs[207];
int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
    {
        cs[i]=cs[i-1]+arr[i];
    }
    int ans =0;

    for(int i=1; i<=n; i++)
    {

        for(int j=i; j<=n; j++)
        {

            ans=max(ans, (j-i+1)-(cs[j]-cs[i-1])+ cs[i-1]+cs[n]-cs[j]);
        }
    }

    cout<<ans<<endl;


    return 0;
}

