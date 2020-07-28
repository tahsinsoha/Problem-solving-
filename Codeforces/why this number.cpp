#include<stdio.h>
#include <math.h>

int main(){

unsigned long long a,b,ans,m,mult;
scanf("%llu%llu",&a,&b);

m= ((pow(10,9))+7);
//mult=(a*b);
ans=(((a%m)*(b%m))%m+(9223372036854775808UL%m))%m;
printf("%llu\n",ans);




return 0;
}
