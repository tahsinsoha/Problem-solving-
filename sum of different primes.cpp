#include<bits/stdc++.h>
using namespace std;
//int n,k;
bool arr[1500];
long long int dp[250][1500][15];
vector<int>prime;
int sz;
void sieve()
{
    arr[0]=arr[1]=1;
    for(int i=2; i<1500; i++)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(int j=i*i; j<1500; j=j+i)
                arr[j]=1;
        }
    }

}
int n,k;
long long int rec(int ind,int curr,int cnt)
{
    if(ind>sz)
        return 0;
    if(cnt==k)
    {
        if(curr==n)
            return 1;
        return 0;
    }
    if(prime[ind-1]>n)
        return 0;
    if(dp[ind][curr][cnt]!=-1)
        return dp[ind][curr][cnt];
        int p1=0,p2=0;
        if(prime[ind-1]+curr<=n)
            p1=rec(ind+1,prime[ind-1]+curr,cnt+1);
        p2=rec(ind+1,curr,cnt);
        return dp[ind][curr][cnt]=p1+p2;

}
int main()
{
    sieve();
    sz=prime.size();
    while(cin>>n>>k){
            if(n==0 && k==0) break;
    //cin>>n>>k;
    sz=prime.size();
    memset(dp,-1,sizeof(dp));
    int cnt=0;
    cout<<rec(1,0,0)<<endl;
    }

    return 0;
}
