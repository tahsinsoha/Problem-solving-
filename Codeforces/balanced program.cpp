#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
long long cs[1000007];
int brr[1000007];

int main()
{
    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]=i;
    }

    for(int i=1; i<=n; i++)
    {

        cin>>brr[i];

        brr[i]=mpp[brr[i]];
    }

    int minn=INT_MAX, cnt=0;
    for(int i=n; i>=1; i--)
    {

        minn=min(minn,brr[i]);
        if(brr[i]>minn)
            cnt++;
    }


    cout<<cnt<<endl;


    return 0;
}



