#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a,c,b,rat;
        scanf("%lf %lf %lf %lf", &a,&c,&b, &rat);
        rat=rat/(rat+1);
        rat=sqrt(rat);
        double ad=a*rat;
        printf("Case %d: %lf\n",i,ad );
    }
}
