#include<stdio.h>
int main(){
    int number[50],input,i,j,temp,a;
    printf("Input Length Of Your Array: ");
    scanf("%d",&input);
    //Loop for input numbers
    for(i=1;i<=input;i++){
        printf("Input a number: ");
        scanf("%d",&number[i]);
     }

     //Loop for Sorting
    for(i=1;i<input;i++){
         for(j=1;j<input;j++){
            if(number[j]<number[j+1]){
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
         }
    }

    if(input%2==1){
        a=(input/2)+1;
    printf("%d",number[a]);
    }
    else{
        a=(input/2);
        printf("%d",(number[a]+number[a+1])/2);
    }

    return 0;
}
