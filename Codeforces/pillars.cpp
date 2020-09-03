#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;
    int maxx=INT_MIN;
    int ind;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]>maxx)
        {
            maxx=arr[i];
            ind=i;
        }

    }
    int f=0;


    for(int i=1; i<ind; i++)
    {
        if(arr[i]>arr[i+1])
            f=1;
    }
    for(int i=ind+1; i<n; i++)
    {
        if(arr[i]<arr[i+1])
            f=1;
    }
    if(f==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
    return 0;

}












