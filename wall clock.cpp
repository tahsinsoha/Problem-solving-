#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,i,ans;
    for(i=0;; i++)
    {
        scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
        if(h1==0&&m1==0&&h2==0&&m2==0)
        {
            break;
        }
        else
        {
            if(h1==h2)
            {
                if(m1<m2)
                {
                    ans=(m2-m1);
                    printf("%d\n",ans);
                }
                else
                {
                    ans=(12*60+(60-m1)+(11*60)+m2);
                    printf("%d\n",ans);
                }

            }
             else if(h2==0)
            {
//h2=24;
                ans=((60-m1)+m2+((24-(h1+1))*60));
                printf("%d\n",ans);
            }
            else if ((h2>h1)||(h1==0))
            {
                ans=(h2-(h1+1))*60+m2+(60-m1);
                printf("%d\n",ans);

            }
            else if(h1>h2)
            {
                ans=(24-(h1-(h2-1)))*60+m2+(60-m1);
                printf("%d\n",ans);

            }

        }
    }
    return 0;
}
