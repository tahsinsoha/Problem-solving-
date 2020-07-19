#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[100],c[100];
int dp[100][1008];
long long int cc(int ind,int tot)
{
    long long int ans;
    int cut ;
    ans=0;
    cut=1e8+7;
    if(tot==k)
        return 1;
    if (ind == n)
        return 0;
    if(dp[ind][tot]!=-1)
        return dp[ind][tot];
         for(int j=0;j<=c[ind] && (j*arr[ind]+tot<=k);j++){
            ans=ans+ cc(ind+1,tot+j*arr[ind]);
            ans= ans%cut;
         }
         return dp[ind][tot]=ans;

}
int main()
{
    int t,cs;
    int cut;
    cut=1e8+7;
    cin>>t;

    for( cs=1; cs<=t; cs++)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cin>>c[i];
        memset(dp,-1,sizeof(dp));
           printf("Case %d: %lld\n", cs, cc(0, 0));
    }


    return 0;
}
