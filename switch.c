#include<stdio.h>
int main(){
    int word=32,hh,c=273,f=54;

    switch(word){
        case 22:{

            c=(f-32)/9)*5;
             printf("Result 1%d\n",c);
            break;
        }
        case 32:{
            f=(c/5)*9+32;
            printf("Resul: %d\n",f);
            break;
        }
        case 42:{
            printf("Result 3\n");
            //break;
        }
        case 52:{
            printf("Result 3\n");
            //break;

        }
        default:
             printf("Invalid \n");


    }
    return 0;
}

