#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   int len=0;
   for(int l=1;l<=n-1;l++){
        int i=0,j=n-l;
    while(j<n && s[i]==s[j]) i++,j++;
      if(j==n) len=l;
   }

   cout<<s.substr(0,len);
   string p = s.substr(len);
   while(k--) cout<<p;

    return 0;
}













