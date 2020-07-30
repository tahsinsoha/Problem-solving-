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
        long long n,m;

        cin>>n>>m;

        if(m<n*2)
            cout<<-1<<" "<<-1<<endl;

        else
            cout<<n<<" "<<2*n<<endl;

    }


    return 0;

}









