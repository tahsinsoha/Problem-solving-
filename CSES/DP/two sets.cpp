#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int arr[100007];
int brr[1000007];
long long ps[1000007];
int dp[507][150000];
string s,t;
int n,m;
set<int>st;
int rec(int i,int sum)
{
    int tot = (i*(i-1))/2; //duita set er jogfol tot hobe koto bhabe
    //mane i-1 porjonto shonkha gula diye sum koto bhabe kora jaay oita count korbo
    if(i>n)
        {
            if(sum*2==tot)
                return 1;
            else
                return 0;
        } // sum jodi banate pari i-1 shonkha diye and
     //jodi sheitar digun tot er shoman hoy mane, amra way pailam, tai 1 return korbo
    if(dp[i][sum]!=-1)
        return dp[i][sum];

    int ret = (rec(i+1,sum+i))%mod; // ekhoner ta ke niye sum banabo
    ret=(ret+rec(i+1,sum))%mod;  //ekhon er ta ke na niye sum banabo
    //ret+=likhe oipashe mod korar jonno wrong khaisilam -_-
    return dp[i][sum]=ret;
}
int main()
{

    cin>>n;
    memset(dp,-1,sizeof(dp));

    cout<<(1LL*rec(1,0)*500000004)%mod<<endl; //modular inverse of 2 hoilo 500000004

    return 0;

}

