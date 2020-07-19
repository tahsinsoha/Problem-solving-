#include<stdio.h>
int main(){
 long long int a,b,sum,i,c;
scanf("%lld%lld",&a,&b);
 sum=0;
for(i=1;;i++){
if(b==0){
break;
}
else {
sum=sum+(a/b);
c=b;
b=(a%b);
a=c;
}
}
printf("%lld\n",sum);
return 0;
}
