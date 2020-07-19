#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,temp;
    char s[100];
    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {
        scanf("%s\n",s);
        //temp=strlen(s);
        if(strlen(s)>10)
        {

            printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);

        }
        else printf("%s\n",s);

    }
    return 0;
}

