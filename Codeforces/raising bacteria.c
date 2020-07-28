#include<stdio.h>
#include<math.h>
int main(){

 int n,i,bac;
int ans=1;
 scanf("%d",&n);
 for(i=1;ans<n;i++){

 ans=ans*2;
 }
 bac=n-ans+1;
printf("%d\n",bac);


return 0;
}
