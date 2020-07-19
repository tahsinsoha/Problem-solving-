#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    cout<<1<<" ";
    int cnt = 4;

    for(int i=1; i<=n/2; i++)
    {
        cout<<cnt++<<" ";
        cout<<cnt++<<" ";
        cnt+=2;

    }
    cnt =2;
    for(int i=1; i<=n/2; i++)
    {
        cout<<cnt++<<" ";
        cout<<cnt++<<" ";
        cnt+=2;

    }
    cout<<2*n<<endl;
    return 0;
}


