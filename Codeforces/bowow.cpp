#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
unsigned long long Pow(unsigned long long x, unsigned long long y){
unsigned long long res = 1;
while(y>0){
    if(y&1)
        res = (res*x)%mod ;
    x= (x*x)%mod;
    y>>=1;
}
return res;
}
int main(){
string s;
cin>>s;
unsigned long long  sz = 0;
unsigned long long  num= 0;
for(unsigned long long i=s.size()-1;i>=0;i--){
    if(s[i]=='1') num = num+ Pow(2,sz);
    sz++;
}
unsigned long long  temp=0;
 for(unsigned long long i=0;;i++){
 if(i>0)  temp = i;
   if(pow(4,i)>=num) {
    cout<<temp<<endl;
    return 0;
   }
 }
return 0;
}
