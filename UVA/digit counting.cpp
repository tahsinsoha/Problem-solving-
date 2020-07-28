#include<bits/stdc++.h>
using namespace std;
int cnt [10];
int main()
{
    int t,n,d,tmp;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        memset(cnt,0,sizeof(cnt));
        for(int j=1; j<=n; j++)
        {
            tmp = j;
            while(tmp>0)
            {
                d = tmp%10;
                cnt[d]++;
                tmp = tmp/10;
            }
        }
        for(int k=0; k<10; k++)
        {
            if(k!=9)
                cout<<cnt[k]<<" ";
            else
                cout<<cnt[k];
        }
        cout<<endl;
    }

    return 0;
}
