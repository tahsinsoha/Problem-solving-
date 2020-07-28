#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
   string s;
   cin>>s;

   for(int i=0;i<s.size();i++){

    arr[s[i]-97]++;

   }

   for(int i=0;i<26;i++){

    cout<<arr[i]<<endl;
   }

    return 0;

}









