#include<stdio.h>
int main(){
    int num[5]={1,2,3,4,5};
    int i,m;
    scanf("%d",&m);
    for(i=0;i<4;i++){
        for(i=m;m<4;m++){
        num[i]=num[i+1];

        }
    }

      for(i=0;i<=4;i++){
        //for(i=m;m<5;m++){
            printf("%d\n",num[i]);
        }
      //}
  // printf("%d\n",num[i]);
return 0;
}
