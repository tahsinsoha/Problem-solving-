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
       int n,m;
       cin>>n>>m;
       int f=0;

       for(int i=1;i<=n;i++)
       {
           int a,b,c,d;
           cin>>a>>b;
           cin>>c>>d;

           if(b==c)
            f=1;

       }

       if(m%2)
       {
           cout<<"NO"<<endl;
           continue;
       }

       else
       {
           if(f==1)
            cout<<"YES"<<endl;
           else
            cout<<"NO"<<endl;
       }




    }


    return 0;

}
















