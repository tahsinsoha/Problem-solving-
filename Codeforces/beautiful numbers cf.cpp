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
        int a;

        for(int i=1; i<=n; i++)
        {
            cin>>a;
            arr[a]=i;

        }

        long long minn=INT_MAX;
        long long maxx = INT_MIN;
        string s="";

        for(int i=1; i<=n; i++)
        {

            maxx=max(maxx,arr[i]);
            minn=min(minn,arr[i]);

            if(maxx-minn+1==i)
                s+='1';
            else
                s+='0';
        }

        cout<<s<<endl;


    }


    return 0;

}








