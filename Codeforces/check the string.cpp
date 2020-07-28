#include<stdio.h>
#include<string.h>
int main()
{
    char s[5000];
    int i,sum1=0,sum2=0,sum3=0,len,flag;
    scanf("%s",s);
    len=strlen(s);
    flag=0;
    for(i=0; i<len; i++)
    {
        if(s[i]<s[i-1])
        {
          flag=1;
            break;
        }
        else
        {
            if(s[i]=='a')
            {
                sum1=sum1+1;
            }
            else if(s[i]=='b')
            {
                sum2=sum2+1;
            }
            else
            {
                sum3=sum3+1;
            }
        }
    }
if(flag==1){printf("NO");}

       else  if((sum1>0&&sum2>0&&sum3>0)&&(sum3==sum2||sum3==sum1||((sum3==sum2)&&(sum3==sum1))))
    {

        printf("YES");
        }

    else printf("NO");
    return 0;
}
