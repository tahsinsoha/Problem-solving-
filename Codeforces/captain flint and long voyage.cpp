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
        int x = (n+3)/4;
        int d = n-x;

       for(int i=1;i<=d;i++)
        cout<<9;

        for(int i=1;i<=x;i++)
        cout<<8;

        cout<<endl;
    }



    return 0;

}












