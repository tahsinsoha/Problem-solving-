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
        long long n,k;
        cin>>n>>k;
        vector<long long >v;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);

        }

        for(int i=0; i<k; i++)
            cin>>cs[i];

        sort(v.begin(),v.end(),greater<long long>());
        sort(cs,cs+k);
        long long sum=0;
        long long cnt = k-1;
        for(int i=0; i<k; i++)
            sum+=v[i];
        for(int i=0; i<k; i++)
        {

            if(cs[i]==1)
                sum+=v[i];
            else
            {
                cnt+=cs[i]-1;
                sum+=v[cnt];
            }
        }

        cout<<sum<<endl;



    }
    return 0;

}








