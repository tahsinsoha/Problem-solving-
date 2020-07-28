#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main(){
int n,k,numb;
cin>>n>>k;
for(int i=0;i<n;i++){
cin>>numb;
arr[numb-1]++;
}
//for(int i=0;i<k;i++){
    //cout<<arr[i]<<" ";
//}
//cout<<endl;
//double temp = ceil(n/2.0);
//cout<<temp<<endl;
int cont2=0,cont1=0;
sort(arr,arr+k);
//for(int i=0;i<k;i++){
  //  cout<<arr[i]<<" ";
//}
//cout<<endl;
double sum=0;
for(int i=0;i<k;i++){
if(arr[i]%2==0) cont2=cont2+arr[i]/2;
else {
    cont2=cont2+arr[i]/2;
     cont1++;
}


 }
//int sum;
cont2=cont2*2;
cont2=cont2+(cont1+1)/2;
cout<<cont2<<endl;
return 0;
}
