#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a = n-1;
int b = 2*(n+1);
if(m<a || m>b) {
    cout<<-1<<endl;
    return 0;
}
if(m==n-1){
    cout<<0;
    for(int i=1; i<=m;i++){
        cout<<10;
    }
    cout<<endl;
    return 0;
}
if(m==n){
    for(int i= 1;i<=m;i++)
        cout<<10;
        cout<<endl;
        return 0;

}
int t = m-(n+1);
for(int i=0 ;i<n;i++){
    if(i<t) cout<<11;
    else cout<<1;
    cout<<0;
}
if(m==b) cout<<11;
else cout<<1;
cout<<endl;
return 0;
}
