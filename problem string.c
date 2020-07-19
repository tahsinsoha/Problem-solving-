#include<stdio.h>
#include<string.h>

int main (){
    int i=6,j;
    char a[8];
    scanf("%s",a);
    j=strlen(a);
    if(a[0]=='f' && j==i){

        printf("holiday");
    }
    else printf("other");


    return 0;
}


//(x-center_x)^2 + (y - center_y)^2 < radius^2
