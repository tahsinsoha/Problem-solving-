#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+5];
int temp,minn=1000000000;
for(int i=0;i<n;i++){
    cin>>arr[i];
    minn=min(minn,arr[i]/max(i,n-1-i));


}
cout<<minn<<endl;
return 0;
}
