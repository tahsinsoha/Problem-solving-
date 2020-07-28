#include<stdio.h>
int main(){

int n,i,sum1,sum2;
int arr[100];
scanf("%d",&n);
sum1=0;
sum2=0;
for(i=1;i<=n;i++){
scanf("%d",&arr[i]);
if(arr[i]%2==0){
sum1=sum1+i;
}
else {sum2=sum2+i;}
}
if(sum1>sum2){printf("%d",sum2);}
else printf("%d",sum1);
return 0;
}
