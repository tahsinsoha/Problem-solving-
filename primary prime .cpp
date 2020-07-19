#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,l,j,flag,k;
    int sum=0;
    char str[20];
    while (scanf("%s",str)==1)
    {
        l=strlen(str);
        sum=0;
        for(i=0; i<l; i++)
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                str[i]=str[i]-96;
            }
            else
            {
                str[i]=str[i]-38;
            }
            sum=sum+str[i];
        }
        flag=0;
        for(k=2; k<=sqrt(sum); k++)
        {

            if(sum%k==0)
            {
                flag=1;
                break;
            }

        }
        if (flag==1)
        {
            printf("It is not a prime word.\n");
        }
        else
        {
            printf("It is a prime word.\n");
        }
    }
//printf("%d",sum);


    return 0;
}
