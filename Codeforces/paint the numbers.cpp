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

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    int cnt=0;
    sort(arr+1,arr+1+n);

    for(int i=1; i<=n; i++)

    {
        if(ps[i]==0)
        {
            cnt++;

            for(int j=i+1; j<=n; j++)
            {
                if(arr[j]%arr[i]==0)
                    ps[j]=1;

            }
        }

        ps[i]=1;
    }

    cout<<cnt<<endl;
    return 0;

}













