#include<stdio.h>
int main()
{
    int n,hour,min,h1,m1,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        scanf("%d:%d",&hour,&min);
        if(min==00)
        {
            if(hour!=12&&hour!=6)
            {
                h1=(12-hour);
                m1=00;
                if(h1!=10&&h1!=11)
                printf("0%d:00\n",h1);
                else printf("%d:00\n");
            }
            else
            {
                h1=hour;
                m1=00;
                if(h1==6)
                printf("0%d:00\n",h1);
                else printf("%d:00\n",h1);
            }
        }
        else
        {
            if(hour==11)
            {
                h1=12;
                m1=60-min;
                     if(m1<10)
                printf("%d:0%d\n",h1,m1);
                else printf("%d:%d\n",h1,m1);
            }
            else if (hour==12)
            {
                h1=11;
                m1=60-min;
                     if(m1<10)
                printf("%d:0%d\n",h1,m1);
                else printf("%d:%d\n",h1,m1);

            }
            else
            {
                h1=11-hour;
                m1=60-min;
                 if(m1<10){
                 if(h1==10||h1==11||h1==12){
                 printf("%d:0%d\n",h1,m1);
                 }
                 else printf("0%d:0%d\n");
                 }
                else if(m1>=10){
                if (h1==10||h1==11||h1==12){
                printf("%d:%d\n",h1,m1);
                }
                else printf("0%d:%d\n",h1,m1);
                }

            }
        }
    }
    return 0;
}
