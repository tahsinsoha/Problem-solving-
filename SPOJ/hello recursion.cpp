#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int n;
int sum(int i)
{

    if(i>n)
        return 0;

    return arr[i]+sum(i+1);



}

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {

        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }

       printf("Case %d: %d\n",j,sum(1));

    }



    return 0;

}











