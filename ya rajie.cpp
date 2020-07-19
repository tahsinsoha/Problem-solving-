#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,i;
cin>>t;
for(i=1;i<=t;i++){
cin>>n;
if(n%5==0){
    cout<<(n/5)<<endl;
}
else cout<<((n/5)+1)<<endl;

}





return 0;
}
