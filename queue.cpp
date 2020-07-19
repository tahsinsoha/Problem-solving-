#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;

    long long int arr[100007];

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr,arr+n);

    long long sum=arr[0];
    int ans=1;

    for(int i=1; i<n; i++)
    {

        if(sum<=arr[i])
        {
            sum+=arr[i];
            ans++;
        }
    }
cout<<ans<<endl;
    return 0;
}

