#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int arr[1047];
int dp[57][57][57];
string s,t,p;
int len1,len2,len3;
int func(int ind1,int ind2,int ind3)
{
    //cout<<ind1<<" "<<ind2<<" "<<ind3<<endl;
    if(ind1>=len1 || ind2>=len2 || ind3>=len3)
        return 0;
    if(dp[ind1][ind2][ind3]!=-1)
        return dp[ind1][ind2][ind3];

    if(s[ind1]==t[ind2]&& s[ind1]==p[ind3])
        dp[ind1][ind2][ind3]=1+func(ind1+1,ind2+1,ind3+1);

    else if(s[ind1]==t[ind2])
        dp[ind1][ind2][ind3]=max(func(ind1,ind2,ind3+1),func(ind1+1,ind2+1,ind3));
    else if(s[ind1]==p[ind3])
        dp[ind1][ind2][ind3]=max(func(ind1+1,ind2,ind3+1),func(ind1,ind2+1,ind3));


    else if(p[ind3]==t[ind2])
        dp[ind1][ind2][ind3]=max(func(ind1,ind2+1,ind3+1),func(ind1+1,ind2,ind3));


    else
        dp[ind1][ind2][ind3]=max({func(ind1,ind2,ind3+1),func(ind1,ind2+1,ind3),func(ind1+1,ind2,ind3)});



    return  dp[ind1][ind2][ind3];

}

int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s>>t>>p;
        len1=s.size();
        len2=t.size();
        len3=p.size();

        cout<<"Case "<<i<<": "<<func(0,0,0)<<endl;

    }

    return 0;
}

