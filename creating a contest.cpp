#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long long arr[n+5];
for(int i=0;i<n;i++)
    cin>>arr[i];
int len=1;
int maxx=1;
for(int i=0;i<n-1;i++){
    if(arr[i+1]<=arr[i]*2){
        len++;
    }
    else {
        maxx=max(len,maxx);
        len=1;
    }
}
maxx=max(len,maxx);
cout<<maxx<<endl;
return 0;
}
