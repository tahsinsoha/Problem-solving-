#include<bits/stdc++.h>
using namespace std;
int coin[]= {1,5,10,25,50};
int n;
long long int way[30005];
int main()
{
    // int way[10005];
    while(cin>>n)
    {
        memset(way,0,sizeof(way));
        way[0]=1;
        for(int i=0; i<5; i++)
        {
            for(int j=coin[i]; j<=n; j++)
            {
                way[j]=(way[j]+way[j-coin[i]]);
            }
        }
        if(way[n]==1) cout<<"There is only "<<1<<" way to produce "<<n<<" cents change."<<endl;
        else cout<<"There are "<<way[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }



    return 0;
}
