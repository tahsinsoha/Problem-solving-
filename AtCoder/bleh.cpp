#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;
    n--;

    long long cnt=0;

    for(int i=1; i<=n; i++)
    {
        cnt+=n/i;


    }

    cout<<cnt<<endl;
    return 0;

}














