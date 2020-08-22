#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{

       int n,m;
       cin>>n>>m;

       int p= min(n,m);
       int prod=1;

       for(int i=2;i<=p;i++)
              prod*=i;


       cout<<prod<<endl;




    return 0;

}










