#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int cont1=0,cont2=0;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1) cont1++;
    else cont2++;
}
if(cont1==n || cont2==n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}
else {
    cout<<2<<" "<<1<<" ";
    cont1--,cont2--;
    while(cont2>0){
        cout<<2<<" ";
        cont2--;
    }
 while(cont1>0){
        cout<<1<<" ";
        cont1--;
    }
}

return 0;
}
