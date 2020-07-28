#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int cont=0,cont1=0;
//int arr[n+5];
vector<int>v;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1) cont++;

}
if(n==1){
    cout<<1<<endl;
    cout<<1<<endl;
    return 0;
}
for(int i=0;i<n;i++){
   if(arr[i]==1 && i!=0 && i!= n-1) v.push_back(arr[i-1]);
   if(arr[i]==1 && i==n-1 ) {
         v.push_back(arr[i-1]);
         v.push_back(1);
   }
   else if(arr[i]!=1 && i==n-1) v.push_back(arr[i]);

}
cout<<cont<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

return 0;
}
