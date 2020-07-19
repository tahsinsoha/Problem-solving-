#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x,y;
cin>>t;
while(t--){
    cin>>x>>y;
    int div1 = 0, div2 = 0;
    for(int i=1;i<x;i++){
        if(x%i==0) div1=div1+i;
    }
      for(int j=1;j<y;j++){
        if(y%j==0) div2=div2+j;
    }
    //cout<<div1<<" "<<div2<<endl;
    if(x==div2 && y==div1) cout<<"Friendship is ideal"<<endl;
    else cout<<"Friendship is not ideal"<<endl;

}
return 0;
}
