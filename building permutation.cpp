#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int arr[n+5];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  sort(arr,arr+n);
long long sum=0;
  for(int i=0;i<n;i++){
sum+= abs((arr[i]-(i+1)));

  }
  cout<<sum<<endl;
    return 0;
}

