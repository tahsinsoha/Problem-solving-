#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    int i,j,k,l,len,m,flag=0;
    scanf("%s",s);
    len=strlen(s);
    if(len<=5)
    {
        printf("NO");
        return 0;
    }

    for(i=0; i<len; i++)
    {

        if(s[i]=='h')
        {

            i=j;
            break;
        }
    }
    for(i=j; i<len; i++)
    {
        if(s[i]=='e')
        {
            i=k;
            break;
        }
    }
    for(i=k; i<len; i++)
    {
        if(s[i]=='l')
        {
            i=l;
            break;
        }


    }
    for(i=l; i<len; i++)
    {
        if(s[i]=='l')
        {
            i=m;
            break;
        }


    }
    for(i=m; i<len; i++)
    {
        if(s[i]=='0')
        {
            flag=1;
            break;
        }


    }
    if(flag==1)
    {
        printf("YES");
    }
    else printf("NO");
    return 0;
}
