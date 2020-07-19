#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[4];
int d;
for(int i=0;i<3;i++) cin>>arr[i];
sort(arr,arr+3);
cin>>d;
int a = arr[1]-arr[0];
int b = arr[2]-arr[1];

int ans= 0;
if(d>a) ans=ans+(d-a);
if(d>b) ans = ans+(d-b);
cout<<ans<<endl;


return 0;
}
