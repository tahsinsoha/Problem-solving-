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
      int n,k,l;
      cin>>n>>k>>l;

      if(k*l<n)
         cout<<-1<<endl;

      else {

        for(int i=1;i<=n;i++)
        {
            cout<<(i%k)<<endl;
        }
      }

    }


    return 0;

}













