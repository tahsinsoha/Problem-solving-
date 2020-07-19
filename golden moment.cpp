#include<bits/stdc++.h>
using namespace std;
long long  arr[1000005];
long long brr[1000005];
//long long brr[n+5];
int main(){
int n;
cin>>n;

long long  sum=0;
if(n==1){
    cout<<0<<endl;
    return 0;
}
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//sum = arr[0]*arr[1];
int track=0;
for(int i= 0;i<n;i++){

      brr[i] = brr[i-1] +arr[i-1];
      sum=sum+brr[i]*arr[i];

    //cout<<sum<<" "<<track<<endl;

}
cout<<sum<<endl;


return 0;
}
