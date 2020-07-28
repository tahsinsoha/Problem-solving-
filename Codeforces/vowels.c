#include<stdio.h>
#include<string.h>
int main()
{
    int t,test;
    scanf("%d", &test);
    for(t=0;t<test;t++)
    {
        char a= 'a',b='e',c='i',d='o',e='u';
        char str[10];
        int i,j;

        scanf("%s", str);
        int len= strlen(str);

        for(i=0;i<len;i++)
        {

            if(str[i]== a || str[i]== b || str[i]== c|| str[i]== d|| str[i]== e)
            {
                j=1;
                printf("Yes\n");
                break;
            }
            else
            {
                j=0;
            }
        }
        if(j==0)
        {
            printf("No\n");
        }
        }

    return 0;
}
