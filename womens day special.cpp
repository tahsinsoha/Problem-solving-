#include<bits/stdc++.h>
int arr[105];
using namespace std;
int main(){
int n,k,d;
cin>>n>>k;
//int arr[k+5];
for(int i=0;i<n;i++) {
        cin>>d;
           arr[d%k]++;
}
int ans= arr[0]/2;
for(int i=1;i<(k+1)/2;i++){
    ans=ans+min(arr[i],arr[k-i]);
}
if(k%2==0){
    ans=ans+arr[k/2]/2;
}
cout<<ans*2<<endl;
return 0;
}
