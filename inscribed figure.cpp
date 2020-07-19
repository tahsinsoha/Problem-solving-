#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
int n,ans=0;
cin>>n;
cin>>a[1];
for(int i=2;i<=n;i++) cin>>a[i];
for(int i=2;i<=n;i++){
if(a[i-1]==1&& a[i]== 2) ans+=3;
if (a[i-1]==1 && a[i]==3) ans+=4;
if(a[i-1]==2 && a[i]==3) {
    cout<<"Infinite"<<endl;
    return 0;
}
if(a[i-1]==2 && a[i]==1) ans+=3;
if(a[i-1]==3 && a[i]==1) ans+=4;
if(a[i-1]==3 && a[i]== 2) {
    cout<<"Infinite"<<endl;
    return 0;
}

}
for(int  i = 2; i<n;i++){
 ans-=(a[i-1]==3 && a[i]==1 && a[i+1]==2);
}
cout<<"Finite"<<endl;
cout<<ans<<endl;
return 0;
}
