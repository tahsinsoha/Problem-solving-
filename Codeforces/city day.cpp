#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
cin>>n>>x>>y;
long long  arr[n+100];
for(int i=0;i<n;i++)
cin>>arr[i];
int flag,fin;

for(int i=0;i<n;i++){
      flag=0,fin=0;
  for(int j=max(0,i-x);j<i;j++){
    if(arr[j]>arr[i]) continue;
    else {
       flag=1;
    //   cout<<i+1<<" "<<flag<<" "<<fin<<endl;
break;
    }
  }
  if(flag==0){
    for(int j= i+1;j<=min(n,i+y);j++){

      if(arr[j]>arr[i]) continue;
    else {
        fin=1;
       // cout<<i+1<<" "<<flag<<" "<<fin<<endl;
        break;
    }
    }
  }
  if(fin==0 && flag==0){
       // cout<<flag<<" "<<fin<<" "<<endl;
    cout<<i+1<<endl;
    return 0;
  }
}

return 0;
}
