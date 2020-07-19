#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<string>v;
        string s;

        int e = n/k;
        int j = min(e,m);
        int r = (m-j);
         //cout<<r<<" "<<k<<endl;
        int ej = (r+k-2)/(k-1);

        cout<<j-ej<<endl;

    }
    return 0;
}














