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
        cin>>arr[i];

    if(arr[0]!=0)
    {
        cout<<1<<endl;
        return 0;
    }

    int ans = -1;
    int cnt=0;

    map<int,int>mpp;
    mpp[0]++;

    for(int i=1; i<=n; i++)
    {

        if(arr[i]!=cnt && !mpp[arr[i]])
        {
            ans=i;
            break;
        }
        else if(arr[i]==cnt)
            mpp[cnt]++, cnt++;
    }
    cout<<ans<<endl;
    return 0;

}













