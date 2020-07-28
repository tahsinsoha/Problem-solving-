#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,ans;
int arr[1005];
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
   // sum=sum+arr[i];

}
//int div= ceil(sum/n);
int high=100000;
for(int t=1;t<=100;t++){
        int cost=0;
for(int j=0;j<n;j++){
   if(arr[j]<=t-1) cost=cost+(t-1-arr[j]);
else if(arr[j]>=t+1) cost=cost+(arr[j]-t-1);

}
if(cost<high) {
    ans=t;
    high=cost;
}
}
cout<<ans<<' '<<high<<endl;

return 0;
}
