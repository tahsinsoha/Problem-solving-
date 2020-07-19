#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string st;
    unsigned long long n,m;

    while(t--)
    {
        cin>>n;
      unsigned  long long m =8;
      unsigned  long long sum=0;

        for(unsigned long long int i=1; i<=(n/2); i++)
        {
         sum+= m*i*i;

       // cout<<sum<<endl;

        }
        cout<<sum<<endl;

    }

    return 0;
}


