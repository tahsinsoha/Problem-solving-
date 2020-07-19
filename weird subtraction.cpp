#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
cin>>a>>b;
long long temp;
while(a!=0 && b!=0){
    if(a>=2*b){
       a=a%(2*b);
   // temp=a;
     //  a=b;
      //b=temp;
    //  cout<<a<<" "<<b<<endl;

    }
 else if(b>=2*a){
       b=b%(2*a);
      // temp=b;
      // b=a;
      // a=temp;
           // cout<<a<<" "<<b<<endl;
    }
  else  if(a<2*b && b<2*a) break;

}

cout<<a<<" "<<b<<endl;
return 0;
}
