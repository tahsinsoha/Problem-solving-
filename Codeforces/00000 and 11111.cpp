#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,k,l,m,o;
    int flag=0;
    char str[1000000];

   while( (scanf("%s",&str)==1)&&(strcmp(str,"")!=0)){
    scanf("%d",&n);
    for(o=1;;o++){
printf("Case %d:\n\n",o);
    for(k=1; k<=n; k++)
    {
        // printf("Case %d:\n",k);
        scanf("%d%d",&i,&j);

        if(j>i)
        {

            for(l=i; l<j; l++)
            {
                flag=0;
                if(str[l]==str[l+1])
                {
                    flag=1;
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
        }
        }
        else
        {
            for(m=j; m<i; m++)
            {
                flag=0;
                if(str[m]==str[m+1])
                {
                    flag=1;
                    continue;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if (flag==1)
            printf("Yes\n");
        else
            printf("NO\n");

    }
   }
   }


    return 0;
}
