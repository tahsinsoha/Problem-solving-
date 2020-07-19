#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    double hour,min;
    double theta1,theta2,ans;
    for(i=1;; i++)
    {
        scanf("%lf:%lf",&hour,&min);
        if(hour==0&&min==0)
        {
            break;
        }
        else
        {
            theta1=(6*min);
            theta2=((min*.5)+(hour*30));
            ans=abs(theta1-theta2);
            if(ans>180)
            {
                printf("%.3lf\n",(360-ans));
            }
            else printf("%.3lf\n",ans);

        }
    }
    return 0;
}
