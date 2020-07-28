#include<stdio.h>
int main(){
int m,n,area,i;
int sum=0;
scanf("%d%d",&m,&n);

area=m*n;

for(i=1;((2*i)<=area);i++){
sum=sum+1;

}
printf("%d\n",sum);

return 0;
}

