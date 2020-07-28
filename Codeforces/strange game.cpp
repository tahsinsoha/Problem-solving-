#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n,numb,av,ans,i,j,sum=0;
int arr[10001];
cin>>t;
for(i=1;i<=t;i++){
    cin>>n;
    sum=0;
    for(int k=0;k<n;k++){
     cin>>numb;
     arr[k]=numb;
     sum=sum+numb;
     }
av=(sum/n);
ans=0;
for(j=0;j<n;j++){
ans=ans+(arr[j]-av)*(arr[j]-av);

}
cout<<"Case "<<i<<": "<<av<<" "<<ans<<endl;
}

return 0;
}
