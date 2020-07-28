#include<stdio.h>
#include<string.h>
int main()
{
    char s[110];
    int i,j,k,l,len,m,flag=0;
    scanf("%s",s);
    len=strlen(s);
    if(len<5)
    {
        printf("NO");
        return 0;
    }

    for(i=0; i<len; i++)
    {

        if(s[i]=='h')
        {

            j=(i+1);
            break;
        }
    }
    for(j=(i+1); j<len; j++)
    {
        if(s[j]=='e')
        {
            k=(j+1);
            break;
        }
    }
    for(k=(j+1); k<len; k++)
    {
        if(s[k]=='l')
        {
            l=(k+1);
            break;
        }


    }
    for(l=(k+1); l<len; l++)
    {
        if(s[l]=='l')
        {
            m=(l+1);
            break;
        }


    }
    for(m=(l+1); m<len; m++)
    {
        if(s[m]=='o')
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
