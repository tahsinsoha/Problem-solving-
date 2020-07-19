#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        int res = INT_MAX;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='>' || s[n-1-i]=='<')
                res = min(res,i);

        }

        cout<<res<<endl;

    }


    return 0;

}










