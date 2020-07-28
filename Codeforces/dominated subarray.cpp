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
        map<int,int>mpp;
        int ans = INT_MAX;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(mpp[arr[i]])
                ans = min(ans, i-mpp[arr[i]]+1);

            mpp[arr[i]]=i;

        }

        if(ans==INT_MAX)
            cout<<-1<<endl;
        else
            cout<<ans<<endl;



    }


    return 0;

}









