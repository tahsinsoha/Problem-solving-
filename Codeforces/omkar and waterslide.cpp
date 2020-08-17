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

        long long maxx=INT_MIN;
        long long cnt=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];


        }


        for(int i=2; i<=n; i++)
        {
            if(arr[i]<arr[i-1])
                cnt+=arr[i-1]-arr[i];


        }

        cout<<cnt<<endl;

    }



    return 0;

}










