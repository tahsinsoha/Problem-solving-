#include<stdio.h>
int main(){
    int a=5,b=10;
    if(a==5 || b==10){
        printf("Condition Ok");
    }
    else if(a==5 && b==10){
        printf("Second Line ,Condition Ok");
    }
    else
    printf("Condition Wrong");

    return 0;
}
