#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
long long int x;
long long int maxx= LLONG_MAX;
long long int arr[200010];
for(int i=0;i<n/2;i++){
    cin>>x;
    maxx= min (maxx,x);
    if(i>0 and x-maxx<arr[i-1])
        maxx= x-arr[i-1];
    arr[i]= x-maxx;
    arr[n-i-1]= maxx;

}
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
