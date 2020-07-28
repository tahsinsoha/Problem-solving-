#include<bits/stdc++.h>
using namespace std;
int dp[100][100],arr[100];
int mat(int start, int end)
{
    if(end-start==1) return 0;
    if(dp[start][end]!=-1) return dp[start][end];
    int min_=INT_MAX,left,right;
    for(int i=start+1; i<end; i++)
    {
        left=mat(start,i);
        right=mat(i,end);
        min_=min(min_,left+(arr[start]*arr[i]*arr[end])+right);
    }
    return dp[start][end]=min_;
}
void print(int start,int end)
{
    if(end-start==1){ printf("M%d",end);
    return ;
    }

int min_=INT_MAX,index,left,right;
for(int i=start+1; i<end; i++)
{
    left=dp[start][i];
    right=dp[i][end];
    if(min_>left+(arr[start]*arr[i]*arr[end])+right)
    {
        min_=left+(arr[start]*arr[i]*arr[end])+right;
        index=i;
    }

}
if(index-start==1) {print (start,index);}
else {
    printf("{");
    print(start,index);
    printf("}");

}
if(end-index==1) {print (index,end);}
else {
    printf("{");
    print(index,end);
    printf("}");

}
return ;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    memset(dp,-1,sizeof(dp));
    cout<<mat(0,n-1)<<endl;
    print(0,n-1);
    return 0;
}

