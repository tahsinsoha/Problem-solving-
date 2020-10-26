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

      int minn=INT_MAX;


      for(int i=1;i*i<=n;i++)
      {
        int p = ((n+i-1)/i)-1;
        p= p+ (i-1);

        minn=min(p,minn);
      }

      cout<<minn<<endl;


    }


    return 0;

}

















