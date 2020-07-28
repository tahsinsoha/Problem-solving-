#include<bits/stdc++.h>
using namespace std;
long long int arr[200007],cum[200007];

map<long long, bool>is;

map<long long, long long>mpp;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    for(int i=1; i<=n; i++)
        cum[i]=cum[i-1] + arr[i];

    long long ans=0,last=0;
//is[0]=1;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==0)
        {
            last =i;
            continue;
        }


        if(is[cum[i]])
        {
            last = max(last,mpp[cum[i]]+1);

        }
        ans+=(i-last);

        mpp[cum[i]]=i;
        is[cum[i]]=1;
    }

    cout<<ans-1<<endl;




    return 0;
}
