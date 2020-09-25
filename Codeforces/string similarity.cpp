#include<bits/stdc++.h>
#define ll long long
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

        string s;
        cin>>s;

        char c = s[n-1];

        for(int i=1;i<=n;i++)
            cout<<c;

        cout<<endl;
    }


    return 0;

}












