#include<bits/stdc++.h>
using namespace std;
set<int>s;
void fac( int a){
for(int i=2;i*i<=a;i++){
    if(a%i==0) {
      s.insert(i);
      s.insert(a/i);
      while(a%i==0){
        a=a/i;
      }
    }
}
if(a!=1) s.insert(a);
}
int main(){
int n;
long long a1,b1,x,y;
cin>>n>>a1>>b1;
fac(a1);
fac(b1);
int arr[n+5],brr[n+5];
for(int i=2;i<=n;i++){
cin>>arr[i]>>brr[i];
}
for(auto p:s){
    if(n==1){
        cout<<p<<endl;
        return 0;
    }
int flag=0;
for(int i=2;i<=n;i++){
    if( arr[i]%p!=0 and brr[i]%p!=0){
        flag=1;
        break;
    }
}
if(flag==0){
    cout<<p<<endl;
    return 0;
}
}
cout<<-1<<endl;
return 0;
}
