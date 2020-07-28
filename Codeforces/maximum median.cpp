#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n,k;


    cin>>n>>k;
    long long arr[n+7];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(n==1)
    {
        cout<<arr[0]+k<<endl;
        return 0;
    }
    sort(arr,arr+n);
    long long  int x = arr[n/2];

    for(int i=(n/2)+1; i<n; i++)
    {
      if(arr[i]>x)
        {
            if(k>=((i-(n/2))*(arr[i]-x)))
            {
                k-=((i-(n/2))*(arr[i]-x));
                x=arr[i];
            }
            else
            {
                x+=(k/(i-(n/2)));
                break;
            }
        }
        if(i==n-1)
        {
            x+=(k/(i-(n/2)+1));
        }

    }

    cout<<x<<endl;
    return 0;
}
