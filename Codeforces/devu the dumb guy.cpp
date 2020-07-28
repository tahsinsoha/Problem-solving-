#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,x;

   cin>>n>>x;

   long long int arr[n+5];

   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   sort(arr,arr+n);
long long int sum=0;

   for(int i=0;i<n;i++){
     sum+= x*arr[i];
     if(x==1) continue;
    else  x--;

   }
   cout<<sum<<endl;
    return 0;
}




