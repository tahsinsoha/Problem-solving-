#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
int ans0=0,ans1=0;
cin>>n;
int arr[n+5];
for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=0;i<n;i++) {
    if(arr[i]==0) ans0++;
    else if(arr[i]==1) ans1++;
    if(ans0==2 || ans1==2) {
          cout<<ans0+ans1<<endl;
          return 0;
    }

}
return 0;
}
