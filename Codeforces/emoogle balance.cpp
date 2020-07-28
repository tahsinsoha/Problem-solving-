#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y[1000],tcase,countt,i;
    tcase=1;
    scanf("%d",&n);
    while(n>0)
    {
        countt=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&y[i]);
            if(y[i]==0)countt++;
        }
    cout<<"Case "<<tcase<<": "<<n-2*countt<<endl;
    tcase++;
    scanf("%d",&n);
    }
    return 0;
}
