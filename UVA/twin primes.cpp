#include<bits/stdc++.h>
#define n 20000005
int prime[n];
int twinp[n];
int k=0;
using namespace std;
void sieve()
{
    int i=2;
    for(i=2; i<=n; i++)
    {
        prime[i]=1;
    }
    int len=sqrt(n);
    prime[0]=prime[1]=0;
    for(int i = 2; i <= len; i++)
    {

        if(prime[i])
        {
            for( int k = i*i; k <= n; k += i )
                prime[k] = 0;
        }
    }
}


void twin()
{
   // int twinp[100000];
    int m=1;
    //sieve();
    //twip[0]=0;
    for(int l=3; l<=n; l++)
    {
        if(prime[l]&&prime[l+2])
        {
            twinp[m]=l;
            m++;
        }

    }



}


int main()
{
        int N;
        sieve();
        twin();
        while(scanf("%d",&N)==1){
            cout<<"("<<twinp[N]<<", "<<twinp[N]+2<<")"<<endl;
        }

    return 0;

}
