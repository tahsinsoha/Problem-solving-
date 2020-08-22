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
        int n,k;

        cin>>n>>k;
        if(n<k)
            cout<<k-n<<endl;
        else cout<<(n-k)%2<<endl;

    }


    return 0;

}









