#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long  int n,m;
cin>>n>>m;
long long int arr[n];
long long int brr[m];

   for(int i=0;i<n;i++){

    cin>>arr[i];

   }
   sort(arr,arr+n);

   for(int i=0;i<m;i++){
    cin>>brr[i];
    cout<<upper_bound(arr,arr+n,brr[i])-arr<<" ";


   }
    return 0;
}
