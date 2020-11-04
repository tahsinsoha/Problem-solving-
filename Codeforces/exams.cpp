#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
pii arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i].ff>>arr[i].ss;
    sort(arr+1,arr+1+n);
    int f=0;
    int prev = arr[1].ss;

    for(int i=2; i<=n; i++)
    {
        if(arr[i].ss<prev)
           prev=arr[i].ff;
        else
           prev =arr[i].ss;


    }
    cout<<prev<<endl;


    return 0;

}














