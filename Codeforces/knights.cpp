#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2==1) {
        for(int j=1;j<=n;j++)
            if(j%2==1) cout<<"W";
        else cout<<"B";
    }
    else  if(i%2==0) {
        for(int j=1;j<=n;j++)
            if(j%2==1) cout<<"B";
        else cout<<"W";
    }

    cout<<endl;

}
return 0;
}
