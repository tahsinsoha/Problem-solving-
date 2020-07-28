#include<stdio.h>
int main(){
int i;
long long int n,ans;
for(i=1;;i++){
    scanf("%lld",&n);
if (n<0){break;}
ans=(n*n+n+2)/2;
printf("%lld\n",ans);


}
return 0;
}
