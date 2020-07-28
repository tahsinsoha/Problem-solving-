#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,l;
    char s1[11],s2[11];
    int flag=0;

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%s %s",s1,s2);
         l=strlen(s2);
        flag=0;
        for(k=0; k<l; k++)
        {
            if((s1[k]=='?')||(s2[k]=='?')||(s1[k]==s2[k]))
               {

                continue;
               }
            else
            {

                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("Yes\n");
        else
        printf("No\n");
    }



    return 0;
}
