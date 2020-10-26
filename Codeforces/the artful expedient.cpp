#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long brr[1000007];
long long ps[1000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        ps[arr[i]]++;

    }
    for(int i=1; i<=n; i++)
    {
        cin>>brr[i];
        ps[brr[i]]++;

    }

    int cnt=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            long long z = arr[i]^brr[j];
            if(ps[z] && arr[i]!=brr[j])
                cnt+=2;


        }
    }

    if(cnt%2)
        cout<<"Koyomi"<<endl;

    else
        cout<<"Karen"<<endl;





    return 0;

}














