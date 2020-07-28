#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
if(n==1  or n==2){
    cout<<"No"<<endl;
    return 0;
}
else {
    cout<<"Yes"<<endl;
    cout<<2<<" "<<1<<" "<<n<<endl;
    cout<<n-2<<" ";
    for(int i=2;i<=n-1;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}




return 0;
}
