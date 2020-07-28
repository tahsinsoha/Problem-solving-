#include<stdio.h>
#include<string.h>
int main()
{

    int i,j,n;
    char s[100];
    scanf("%d",&i);
    for(j=1; j<=i; j++)
    {
        scanf("%d",&n);
        gets(s);

        if(strcmp(s,"Alice") ==0||strcmp(s,"Bob") ==0)
        {
            if(n==1) printf("Case %d: Bob",j);

            else if(n==2) printf("Case %d: Alice",j);

            else if (n%2==0) printf("Case %d: Bob",j);

            else printf("Case %d: Alice",j);

        }

            }

return 0;
}
