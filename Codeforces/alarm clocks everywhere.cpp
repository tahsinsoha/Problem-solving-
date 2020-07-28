#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
long long arr[n+5];
long long brr[m+5];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<m;i++) cin>>brr[i];
long long gc = arr[1]-arr[0];
for(int i= 2; i<n;i++){
    gc = __gcd(gc,arr[i]-arr[i-1]);

}
//cout<<gc<<endl;
for(int i=0;i<m;i++){
    if(gc%brr[i]==0) {
            cout<<"YES"<<endl;
        cout<<arr[0]<<" "<<i+1<<endl;
    return 0;
    }
}
cout<<"NO"<<endl;
return 0;
}
