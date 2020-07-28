#include<stdio.h>
int main(){
    int i;
//    printf("%d\n",'A');
    printf("%d\n",'Z');
  printf("%d\n",'z');
    for(i=65;i<=122;i++){
        if(i>90&&i<97){
        continue;
        }
        printf("%c\n",i);

    }
    return 0;
}
