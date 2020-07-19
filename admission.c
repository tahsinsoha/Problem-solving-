#include<stdio.h>
int main (){
        char c;

        int maths,physics ,chemistry;



        scanf("%c %d %d %d ",&c, &maths ,&physics ,&chemistry );
        printf("%c %d %d %d %d",c, maths ,physics ,chemistry, maths+ physics +chemistry ,maths +physics);

        if(maths>=60 && physics>=50 && chemistry>=40 && maths +physics +chemistry>=200 || maths+physics>=150){

        printf("%c is chosen",c);

    }

    else {printf("not chosen");}



return 0;
}














