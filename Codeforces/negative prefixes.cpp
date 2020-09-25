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

        for(int i=1; i<=n; i++)
            cin>>arr[i];
        vector<int>v;

        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                v.push_back(arr[i]);
                arr[i]=1000000;
            }
        }

        sort(v.begin(),v.end(),greater<int>());

        int x=0;

        for(int i=1; i<=n; i++)
        {
            if(arr[i]>1e5)
            {
                cout<<v[x]<<" ";
                x++;
            }
            else
                cout<<arr[i]<<" ";
        }

        cout<<endl;

    }


    return 0;

}











