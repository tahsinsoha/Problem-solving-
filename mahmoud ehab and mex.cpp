#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long n,k;
    cin>>n>>k;
    map<int,int>mpp;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;

    }
    int cnt=0;

    for(int i=0; i<k+1; i++)
    {
        if(i==k && mpp[i])
            cnt++;
        if(i!=k and !mpp[i])
            cnt++;
    }

    cout<<cnt<<endl;


    return 0;

}












