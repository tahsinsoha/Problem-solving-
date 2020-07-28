#include<stdio.h>
int main(){

int n,i;
long long int numb,ans;
scanf("%d",&n);

for(i=1;i<=n;i++){
    scanf("%lld",&numb);
ans=(numb*(numb+1))/2;
printf("%lld\n",ans);
}


return 0;
}
