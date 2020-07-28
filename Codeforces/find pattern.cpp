#include<stdio.h>
int main(){
long long int n,ans,t;
int i;
scanf("%lld",&t);
for(i=1;i<=t;i++){
scanf("%lld",&n);
if(n==0){break;}
ans= ((n*(n+1))/2)+n;
printf("%lld\n",ans);


}
return 0;
}
