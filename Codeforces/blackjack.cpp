#include<stdio.h>
int main(){

   int n;
   int sub;
   scanf("%d",&n);
   sub=n-10;
  if(sub!=10){
    if(sub>=2&&sub<=9) printf("4");
    else if(sub==1||sub==11) printf("4");
else if(sub==0){printf("0");}
else printf("0");
  }


    else if(sub==10) printf("15");


return 0;
}
