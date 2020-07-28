#include<bits/stdc++.h>
using namespace std;
int arr[107];
int main(){
int n,a;
cin>>n>>a;
for(int i=1;i<=n;i++) cin>>arr[i];

int diff = max(n-a,a-1);
int cont=arr[a];

for(int i=1;i<=diff;i++){
if(a-i>0 && a+i<=n && arr[a-i]==1 && arr[a+i]==1) cont+=arr[a-i]+arr[a+i];
else if(a-i>0 && a+i>n && arr[a-i]==1) cont+=arr[a-i];
else if(a+i<=n && a-i<=0 && arr[a+i]==1) cont+=arr[a+i];
}
cout<<cont<<endl;
return 0;
}


