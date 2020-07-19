#include<bits/stdc++.h>
using namespace std;
int main(){

int i,t,ang;
double ans;
cin>>t;
for(i=1;i<=t;i++){
cin>>ang;
if(360%(180-ang)==0){
    cout<<"YES"<<endl;
}
else cout<<"NO"<<endl;

}


return 0;
}
