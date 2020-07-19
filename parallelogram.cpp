#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    int i,j,a1,a2,b1,b2,c1,c2,area,base,d1,d2,dg1,dg2;
    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {
        scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
        base=sqrt((pow((a1-b1),2))+(pow((a2-b2),2)));
        d1=a1+c1-b1;
        d2=a2+c2-b2;
        //dg1=sqrt((pow((a1-b1),2))+(pow((a2-b2),2)));
       // dg2=sqrt((pow((a1-b1),2))+(pow((a2-b2),2)));
        area=(a1*b2+b1*c2+c1*d2+d1*a2-a1*d2-d1*c2-c1*b2-b1*a2)/2;
        printf("Case %d: %d %d %d\n",j,d1,d2,abs(area));
    }

    return 0;
}
