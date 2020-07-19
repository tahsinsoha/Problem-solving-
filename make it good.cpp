#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];

        int j=n;
        int cnt=0;

        for(j=n; j>=2; j--)
        {

            if(arr[j]<=arr[j-1])
               continue;
            else
                break;
        }

        for(; j>=2; j--)
        {

            if(arr[j]>=arr[j-1])
                continue;
            else
                break;

        }

        cout<<j-1<<endl;

    }


    return 0;

}










