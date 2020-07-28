ll dp[35][35];

ll f(int i , int j)
{
    if(j==0)return 1;
    if(i==j)return 1;
    if(j==1)return i;

    if(dp[i][j]!=-1)return dp[i][j];

    return dp[i][j] = f(i-1 , j)+f(i-1 , j-1);
}
