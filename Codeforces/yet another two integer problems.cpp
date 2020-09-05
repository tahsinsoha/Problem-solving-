#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       long long int a,b;
       cin>>a>>b;

       long long int diff = abs(a-b);

       cout<< (diff+9)/10<<endl;
   }
    return 0;

}

















