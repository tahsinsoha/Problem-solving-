#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n,m,k;

  int arr[100007];

    cin>>n>>m>>k;

    for(int i=0; i<=m; i++)
        cin>>arr[i];

   int ans=0;

   for(int i=0;i<m;i++){
    if(__builtin_popcount(arr[i]^arr[m])<=k)
        ++ans;
   }

   cout<<ans<<endl;
    return 0;
}


