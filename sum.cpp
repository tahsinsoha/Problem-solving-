#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,k,l;
int sum=0;
scanf("%d",&i);
if(i>0)
{
for(k=1;k<=i;k++)
  {

      sum=sum+k;
  }
  printf("%d\n",sum) ;
}
else if(i<0) {
for(k=i;k<=(-2);k++){

sum=sum+k;
}
printf("%d\n",sum);

}
else printf("1\n");

return 0;
}
