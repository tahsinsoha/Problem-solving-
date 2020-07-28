#include<stdio.h>
int main(){
    char Character;
    //scan Character;
    //If chracter ==A print A, if Character==B, print B..........Z;
    //Hints : character >=A ;
    //printf .....,&& character<=Z print.....

    scanf("%c",&Character);
    if (Character >= 'A'&& Character<='Z')
    {
       printf("Character is valid %c",Character);

    }
    else
    {
        printf("invalid");
        }

    return 0;
}
