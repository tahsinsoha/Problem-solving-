#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,len;

    scanf("%s",s);
    len=strlen(s);
    int sum1=0;
    int sum2=0;
    for(i=0; i<len; i++)
    {

        if(s[i]>='a'&&s[i]<='z')
        {
            sum1=sum1+1;
        }
        else sum2=sum2+1;
    }
    for(j=0; j<len; j++)
    {
        if((sum1>sum2)||(sum1==sum2))
        {
            if(s[j]>='a'&&s[j]<='z')
            {
                printf("%c",s[j]);
            }
            else printf("%c",s[j]+32);
        }
        else {
       if(s[j]>='A'&&s[j]<='Z'){
         printf("%c",s[j]);


       }
       else printf("%c",s[j]-32);
}
    }
    return 0;
}
