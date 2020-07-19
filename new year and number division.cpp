#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
long long arr[n+5];
//cin>>n;
for(int i=0;i<n;i++){
cin>>arr[i];

}
sort(arr,arr+n);
long long sum=0;
long long m;
for(int i=0;i<n/2;i++){
m=(arr[i]+arr[n-1-i]);
m=m*m;
sum=sum+m;
}
cout<<sum<<endl;
return 0;
}

