#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long long arr[n+5];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
int j= 0;
int cont=0;
//int ans =0;
for(int i=0;i<n;i++){
    if(arr[i]>arr[j]) cont++,j++;
   // if(arr[i]>temp) break;
   //cout<<cont<<" "<<j<<endl;
}
cout<<cont<<endl;

return 0;
}
