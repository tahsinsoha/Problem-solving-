#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,ox,oy,ax,ay,bx,by;
    double r,arc,theta,dis,th;

    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {

        scanf("%d%d%d%d%d%d",&ox,&oy,&ax,&ay,&bx,&by);
        r=sqrt((pow((ox-ax),2))+(pow((oy-ay),2)));
        dis=sqrt((pow((ax-bx),2))+(pow((ay-by),2)));
        th=dis/(2*r);
        theta= 2*asin(th);
        arc=r*theta;
        printf("Case %d: %lf",j,arc);

    }
    return 0;
}
