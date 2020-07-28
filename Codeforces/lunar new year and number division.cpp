#include<bits/stdc++.h>
using namespace std;
//int arr[];
int main(){
long long int n,sum=0,pluss,x;
cin>>n;
long long int arr[n+5];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
//int j=(n/2)-1;
for(int i=0;i<=(n/2)-1;i++){
pluss= arr[i]+arr[(n-(i+1))];
sum=sum+pluss*pluss;
//n--;
//cout<<sum<<endl;
}
cout<<sum<<endl;
return 0;
}
