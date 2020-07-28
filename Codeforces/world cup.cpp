#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
   int n;
   cin>>n;
   set<pair<long long,long long>>st;
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];

       long long m = arr[i]-i+1;
       st.insert({(m+n-1)/n,i});


   }

cout<<(*st.begin()).second<<endl;
    return 0;
}














