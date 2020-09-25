#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
  long long  a,b,c,d;

  cin>>a>>b>>c>>d;

  long long p1 = a*c , p2 = a*d , p3=b*c, p4=b*d;

  long long maxx=max(p1,p2);
  maxx=max(maxx,p3);
  maxx=max(maxx,p4);

  cout<<maxx<<endl;

    return 0;

}










