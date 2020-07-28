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

        long long s,n;
        cin>>s>>n;

        if(s<=n)
        {

           if(s%2==0 || s==1) cout<<1<<endl;
           else cout<<2<<endl;
        }

        else {
           long long div = s/n;
           long long rem = s%n;
           if(rem && rem%2) div+=2;
           else if(rem && rem%2==0) div++;

           cout<<div<<endl;
        }
    }


    return 0;

}









