#include<stdio.h>
int main(){
int n,a,b,i,j,sum;
int array[101];
scanf("%d",&n);
for(i=0;i<(n-1);i++){

    scanf("%d",&array[i]);
}
scanf("%d%d",&a,&b);
sum=0;
for(j=a;j<b;j++){

    sum=sum+array[j-1];
}
printf("%d",sum);

return 0;
}





