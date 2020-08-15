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

        for(int i=1;i<=n;i++)
            cin>>arr[i];

        if( arr[1] +arr[2] > arr[n])
            cout<<-1<<endl;

        else cout<<1<<" "<<2<<" "<<n<<endl;
    }


    return 0;

}









