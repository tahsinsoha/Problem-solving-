#include<stdio.h>
int main()
{

    int i,j,k,flag;

    // put your main code here, to run repeatedly:
    for(i=2; i<=50; i++)
    {
        flag=0;
        for(j=2; j<=(i/2); j++)
        {

            if((i%j)==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(k=1; k<=i; k++)
            {


                printf("%d ",k);

                //digitalWrite(led1,HIGH);
                //delay(10000);
                //digitalWrite(led1,LOW);
                //delay(10000);

                //}
            }
                printf("\n");

        }
       // printf("\n");

    }

    return 0;
}
