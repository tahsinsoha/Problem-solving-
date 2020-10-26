#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{

     int a,b,c,d,e,f;

     cin>>a>>b>>c>>d>>e>>f;

     int sum=0;

     if(e>f)
     {
         int l = min(a,d);
         a-=l;
         d-=l;

         sum+=l*e;

         int p = min(b,min(c,d));

         b-=p;
         c-=p;
         d-=p;

         sum+=f*p;



     }

     else
     {

         int p = min(b,min(c,d));

         b-=p;
         c-=p;
         d-=p;

         sum+=f*p;

          int l = min(a,d);
         a-=l;
         d-=l;

         sum+=l*e;

     }

     cout<<sum<<endl;
    return 0;

}














