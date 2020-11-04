#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int dp[207][4007];
int n;

//0- rest, 1-contest, 2-sport
int rec(int i, int last)
{
    if(i>n)
        return 0;

    if(dp[i][last]!=-1)
        return dp[i][last];
    int ret1=0;
    if(last==-1)
    {
        if(arr[i]==0)
        {
            ret1=1+rec(i+1,0);
        }
       else if(arr[i]==1)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1)});
       }
        else if(arr[i]==2)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,2)});
       }
        else if(arr[i]==3)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1),rec(i+1,2)});
       }
    }

    else if(last==0)
    {
        if(arr[i]==0)
        {
            ret1=1+rec(i+1,0);
        }
       else if(arr[i]==1)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1)});
       }
        else if(arr[i]==2)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,2)});
       }
        else if(arr[i]==3)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1),rec(i+1,2)});
       }

    }
    else if(last==1)
    {
     if(arr[i]==0)
        {
            ret1=1+rec(i+1,0);
        }
       else if(arr[i]==1)
       {
           ret1=1+rec(i+1,0);
       }
        else if(arr[i]==2)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,2)});
       }
        else if(arr[i]==3)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,2)});
       }

    }
    else if(last==2)
    {
       if(arr[i]==0)
        {
            ret1=1+rec(i+1,0);
        }
       else if(arr[i]==1)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1)});
       }
        else if(arr[i]==2)
       {
           ret1=1+rec(i+1,0);
       }
        else if(arr[i]==3)
       {
           ret1=min({1+rec(i+1,0),rec(i+1,1)});
       }


    }

    return dp[i][last]=ret1;

}


int main()
{


    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<rec(1,-1)<<endl;





    return 0;

}














