#include<bits/stdc++.h>
using namespace std;
#include<vector>
#define n 1000000
int prime[n],l;
vector<long long > onlyprime;;
//int onlyprime[n];
int k=0;
//using namespace std;
void sieve()
{
    // vector<long long int> onlyprime;
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
            //onlyprime.push_back(i);
            for( int k = i*i; k <= n; k += i )
                prime[k] = 0;
            //onlyprime.push_back(k);
        }
    }



    for(int i=0; i<=n; i++)
    {
        if(prime[i])
        {
//onlyprime[k]=i;;
            // k++;
            onlyprime.push_back(i);
        }
    }
}

int main()
{
    sieve();
//for(int l=0;l<onlyprime.size();l++)cout<<onlyprime[l]<<" ";
    long long int N,countt=0,l,d=-1;
    cin>>N;

    if(N%2==0){
        cout<<(N/2)<<endl;
        return 0;
    }

    else
    {

        for(long long int m=0; onlyprime[m]<= sqrt(N); m++ )
        {

            if(N%onlyprime[m]==0)
            {
                d=onlyprime[m];
                break;
            }


        }


    }
    if(d==-1)
    {
        cout<<1<<endl;
        return 0;
    }
    else
        cout<<1+(N-d)/2<<endl;
    return 0;
}
