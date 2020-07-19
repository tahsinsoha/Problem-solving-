#include<bits/stdc++.h>
using namespace std;
int coin[]= {1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
int n;
long long int way[10005];
int main()
{
    // int way[10005];
    while(cin>>n)
    {
        memset(way,0,sizeof(way));
        way[0]=1;
        for(int i=0; i<21; i++)
        {
            for(int j=coin[i]; j<=n; j++)
            {
                way[j]=way[j]+way[j-coin[i]];
            }
        }
        cout<<way[n]<<endl;
    }



    return 0;
}
