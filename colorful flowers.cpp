#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
  int a,b,c;

  while(cin>>a>>b>>c)
  {
    double s= (a+b+c)/2.0;
    double t= sqrt( s*(s-a)*(s-b)*(s-c) );
    double R= (a*b*c)/(4*t);
    double C= pi*R*R;
    C-=t;
    double r= sqrt( ((s-a)*(s-b)*(s-c))/s );
    double cir= pi*r*r;
    t-=cir;

    cout<<setprecision(4)<<fixed<<C<<" "<<t<<" "<<cir<<endl;
  }
}
