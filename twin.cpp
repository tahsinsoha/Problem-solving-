#include<bits/stdc++.h>
using namespace std;
int main(){

int n,i,coin,sum=0,av,sum1=0,ans=0;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
cin>>arr[i];
sum=sum+arr[i];
}
av=ceil(sum/2);
sort(arr,arr+n);
for(i=(n-1);i>=0;i--){
  sum1=sum1+arr[i];
  ans++;
  if(sum1>av){break;}

}
cout<<ans<<endl;
return 0;
}
