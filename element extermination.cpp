#include<bits/stdc++.h>
using namespace std;
int arr[20000007];
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

        if(arr[1] ==n || arr[n]==1 || arr[1]>arr[n])
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;

    }


    return 0;

}











