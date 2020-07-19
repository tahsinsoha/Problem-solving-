#include<stdio.h>
int main(){
    int t,b,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        //scanf("%d",&b);
        //b=i;
        if(b%3==0 && b%5!=0){
            printf("Case %d: Fizz\n",i);
        }
        else if(b%5==0 && b%3!=0){
            printf("Case %d: Buzz\n",i);
        }
        else if(b%3==0 && b%5==0){
             printf("Case %d: FizzBuzz\n",i);
        }
        else
             printf("Case %d: Null\n",i);

    }
    return 0;
}
