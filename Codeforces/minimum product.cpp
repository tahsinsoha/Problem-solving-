#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long int a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        long long int diff1 = abs(a-x);
        long long int diff2 = abs(b-y);
        long long int sum=diff1+diff2;

        if(n>=sum)
            cout<<abs(a-diff1)*abs(b-diff2)<<endl;

        else
        {

            long long p1 = (a-min(diff1,n))* (b - min(diff2,(n-min(diff1,n))));
            long long p2 = (b-min(diff2,n))* (a - min(diff1,(n-min(diff2,n))));

                           cout<<min(p1,p2)<<endl;


        }
    }
    return 0;

}


















