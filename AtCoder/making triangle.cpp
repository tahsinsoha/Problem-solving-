#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {

        cin>>arr[i];
    }
    sort(arr+1,arr+1+n);
    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
            for(int k=j+1; k<=n; k++)
            {
                if(arr[i]!=arr[j] && arr[j]!=arr[k] && arr[i]!=arr[k])
                {
                    if(arr[i]+arr[j]>arr[k])
                        cnt++;
                }

            }
    }

    cout<<cnt<<endl;


    return 0;

}










