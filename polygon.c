#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    double  r,n;
    double ans,area,temp,value;
    while(scanf("%lf%lf",&r,&n)==2)
    {
        value=(2*pi)/n;

        printf("%.3lf\n",.5*n*r*r*sin(value));

    }


    return 0;
}
