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
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        int last=0;

        for(int i=2; i<=n; i++)
        {
            if(i-1>1 && arr[i-1]>arr[i])
                last++;

            cs[i]=cs[last+1]+1; //jar shathe jukto hobe tar theke height 1 beshi
           // cout<<i<<" "<<last<<" "<<cs[i]<<endl;
        }

        cout<<cs[n]<<endl;
    }




    return 0;

}













