#include<bits/stdc++.h>
int main()
{
    int kirito,n,ds,bonus,i;
    int flag=0;

    scanf("%d%d",&kirito,&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&ds,&bonus);
        if(ds>=kirito)
        {
            printf("NO\n");
            return 0;
        }
   else {
        flag=1;
        kirito=kirito+bonus;}
    }
   if(flag==1)printf("YES\n");
    return 0;
}
