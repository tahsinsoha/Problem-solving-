#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,sum=0;
cin>>a>>b;
c=a;
while(a/b>0){
sum=sum+a/b;
    a=a/b+a%b;
   // sum=sum+a;
}

cout<<sum+c<<endl;
return 0;
}
