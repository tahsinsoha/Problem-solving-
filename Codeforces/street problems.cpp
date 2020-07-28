#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,x=8,tc=0;
double n1;
while(1){
   n1 = sqrt((x*x+x)/2);
   n=n1;
   if(n1==n){
    printf("%10lld%10lld\n",n,x);
    tc++;
   }
if(tc==10)
    break;
x++;
}


return 0;
}
