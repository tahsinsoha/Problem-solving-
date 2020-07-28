#include<stdio.h>
#include<string.h>
    int main(){
        char a[20];
        int i=0,j,temp,l=0;
    scanf("%s",a);
    j=strlen(a)-1;
    for(i=0;i<=j;i++){
        if(a[i]!=a[j]){
            l=1;
            break;
        }
        else{
         l=0;
        }
        j--;
    }
    if(l==0)
    printf("palindrome");
    else
    printf("Not a palindrome");

    return 0;
    }
