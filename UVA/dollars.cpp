#include<bits/stdc++.h>
using namespace std;
int coin[]= {5,10,20,50,100,200,500,1000,2000,5000,10000};
double n;
long long int way[30005];
int main()
{
    // int way[10005];
    while(cin>>n && n!=0.00)
    {
        memset(way,0,sizeof(way));
        way[0]=1;
        for(int i=0; i<11; i++)
        {
            for(int j=coin[i]; j<=static_cast<int>(n*100+.5); j++)
            {
                way[j]=(way[j]+way[j-coin[i]]);
            }
        }
            printf("%6.2f%17lld\n", n, way[static_cast<int>(n * 100 + 0.5)]);
    }



    return 0;
}
