#include<bits/stdc++.h>
int main()
{
    char s[105];
    int i,len;
    int flag=0;
    char c;
    scanf("%s",s);
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[0]<='z'&&s[0]>='a')
        {
            for(i=1; i<len; i++)
            {
                if(s[i]>='a'&&s[i]<='z')
                {
                    flag=1;
                   // break;
                }

            }
            if(flag==1)
            break;
        }
        else if(s[0]>='A'&&s[0]<='Z')
        {

            for(i=1; i<len; i++)
            {

                if(s[i]>='a'&&s[i]<='z')
                {
                    flag=1;
                    break;

                }
            }
           if(flag==1) break;
        }

    }
    if(flag==1)
    {
        printf("%s",s);
    }
    else
    {
        for(i=0; i<len; i++)
        {
            if(i==0)
            {
                c=toupper(s[0]);
                printf("%c",c);
            }

            else if(i>0&&i<len)
            {
                c=tolower(s[i]);
                printf("%c",c);

            }





        }
    }
    return 0;
}
