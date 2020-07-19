#include<bits/stdc++.h>
using namespace std;
int main(){

long long int n,x,y,k,i;
cin>>n;
for(i=1;i<=n;i++){
    cin>>x>>k>>y;
    if((k>x&&k<y)||(k>y&&k<x)){
        cout<<"case "<<"#"<<i<<": Yeah!"<<endl;

    }
else cout<<"case "<<"#"<<i<<": Nah!!"<<endl;



}



return 0;
}
