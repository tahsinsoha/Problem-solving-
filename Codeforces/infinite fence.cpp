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
      int r,b,k;
      cin>>r>>b>>k;
      if(r>b)
        swap(r,b);

      if(r==b)
      {
          cout<<"OBEY"<<endl;
          continue;

      }

      int g = __gcd(r,b);
      int mx = (b-g-1)/r+1;

      if(mx>=k)
        cout<<"REBEL"<<endl;
      else
        cout<<"OBEY"<<endl;


  }


    return 0;

}










