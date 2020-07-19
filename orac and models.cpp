#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[2007];

int dp[100][100],n;
using namespace std;
int lis(int index,int last)
{
    if(index==n+1)
        return 0;
    if(dp[index][last]!=-1)
        return dp[index][last];
    int x=0,y=0;
    if(arr[index]>arr[last])
    {
        x=1+lis(index+1,index);
    }
    y=lis(index+1,last);
    return dp[index][last]=max(x,y);

}
int main()
{
    int t;
   cin>>t;
   while(t--){
    cin>>n;

    for(int i=1;i<=n;i++) cin>>arr[i];

    int sq = ceil(sqrt(n));

    cout<<sq<<endl;

    for(int i=2;i<=sq;i++){
              n=0;
             memset(brr,0,sizeof(brr));
        for(int j = i; j<=n;j+=i){
            n++;
            brr[n] = arr[j];

        }
        cout<<lis(1,0)<<endl;
    }

   }

   return 0;
}










