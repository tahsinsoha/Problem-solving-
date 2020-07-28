/*marks>=40 Grade D
marks>=50 Grade C
marks>=60 Grade B
marks>=70 Grade A
marks>=80 Grade A+*/

#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=80 && marks<=100){
    printf("grade A+");
    }
    else if (marks>=70 && marks<80){

    printf("grade A");
    }
    else if(marks>=60  && marks <70){

    printf("grade B");

    }
    else if(marks>=50 && marks<60){
    printf("grade c");
    }
    else if(marks>=40 && marks<50){

    printf("grade D");

    }
    else if(marks>=0 && marks<=40){
    printf("grade F");
    }
    else
    printf("invalid input");

    return 0;
}
