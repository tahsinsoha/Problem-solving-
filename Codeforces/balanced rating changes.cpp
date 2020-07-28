#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++) cin>>arr[i];
int sume = 0,sumo =0;
for(int i=0;i<n;i++){
    if(arr[i]%2==0) sume = sume+arr[i]/2;
    else {
         sumo = sumo+ arr[i]/2;
        }
}
//cout<<sume<<sumo<<endl;
int cont=0;
if(abs(sumo)>abs(sume)) {
    int diff  = abs(sumo)-abs(sume);
for(int i=0;i<n;i++) {
    if(arr[i]%2 && arr[i]<0 && cont<diff) {
        cout<<(arr[i]+2-1)/2<<endl;
        cont++;
    }
    else cout<<arr[i]/2<<endl;
}

}

if(abs(sumo)<abs(sume) ){
    int diff  = abs(sume)-abs(sumo);
for(int i=0;i<n;i++) {
    if(arr[i]%2 && arr[i]<0 && cont<diff) {
        cout<<arr[i]/2<<endl;
        cont++;
    }
    else cout<<arr[i]/2<<endl;
}

}
return 0;
}
