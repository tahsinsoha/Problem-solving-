#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    long long  int n,k;
    while(t--)
    {
        cin>>n>>k;

        string s="";

        for(int i=0; i<n; i++)
            s+='a';



        long long sum=0;
        long long i;
        for( i=1; i<=n-1; i++)
        {
            sum+=i;
            if(sum>=k)
                break;

        }
        //  cout<<i<<" "<<k<<endl;
        long long l = (n-i);
        long long r =(n-i+1) +(sum-k);  // i-1

        s[l-1]='b';
        s[r-1]='b';

        cout<<s<<endl;


    }



}

