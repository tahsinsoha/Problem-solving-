#include<stdio.h>

int main(){

  int i,j,k,n;
  int sum=0;
  int arr[100];
  int temp=1;

 scanf("%d %d\n",&n,&k);
 for(i=1;i<=n;i++){
 scanf("%d",&arr[i]);
 if(i==k)
 temp=arr[i];
 if(arr[i]>=temp && temp>0)
 sum=sum+1;
 }
printf("%d\n",sum);

return 0;
}
