#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
 unsigned long long n;
 cin>>n;

 unsigned long long z = (n*(n-1)*2)/2; //koybhabe
 unsigned long long prod=z;
 //cout<<z<<endl;

 for(int i=1;i<=n-2;i++)
 {
     prod=((prod*10))%m;
     //cout<<prod<<endl;

 }

 //prod= (prod*z)%m;

 cout<<prod<<endl;




    return 0;

}











