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
      int n,k;
      cin>>n>>k;

      int div = n/k;
      int rem = n%k;
      int z = k/2;

      cout<<div*k+min(z,rem)<<endl;
  }

    return 0;

}









