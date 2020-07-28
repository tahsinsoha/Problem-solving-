#include<bits/stdc++.h>
using namespace std;
sum(int n){
int a=0;
while(n>0){
    a=a+n%10;
    n=n/10;
}
return a;
}
int main(){
int n;
cin>>n;

for(int i=n;;i++){
if(sum(i)%4==0){
    cout<<i<<endl;
    return 0;
}
}

return 0;
}
