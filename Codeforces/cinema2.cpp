#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int t,seat,frnd;
char s[111111];
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&seat,&frnd);
        frnd++;
        scanf("%s",s+1);
        int sum=0,x=1;
        for(int i=1;i<=seat;i++)
        {
            if(s[i]=='0')
            {
                sum++;
                if(sum>=frnd)
                {
                    x=0;
                    break;
                }
            }
            else sum=0;
        }
        printf("%s\n",x?"no":"yes");
    }
    return 0;
}
