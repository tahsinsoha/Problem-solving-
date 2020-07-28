#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
    int n,m;
    string s;

    while(t--)
    {
        cin>>n>>m;
        if(n==1 or m==1  or (n==2 && m==2))
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;

    }
    return 0;
}








