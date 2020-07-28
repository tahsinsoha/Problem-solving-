#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt0=0,p=0,q=0;
        int j,k;
        int sz=s.size();

        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='0')
                cnt0++;
            else
                cnt1++;
        }
        int x=0,y=0;
        int ans=INT_MAX;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='0')
                x++;
            else
                y++;

            ans=min(ans,x+cnt1-y);
            ans=min(ans,y+cnt0-x);

        }

        cout<<ans<<endl;

    }
    return 0;
}














