#include<stdio.h>
int main(){
int n,i,numb,lowest;
int highest;
int sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&numb);
    if(i==1){highest=numb;
    lowest=highest;
   // printf("%d %d",highest,lowest);
    continue;
    }

    else if(numb>highest ){
      highest=numb;

   // printf("%d %d",highest,lowest);
      sum=sum+1;
    }
   else  if(numb<lowest){
    lowest=numb;

   // printf("%d %d",highest,lowest);
    sum++;
   }

}
printf("%d\n",sum);
return 0;

}
