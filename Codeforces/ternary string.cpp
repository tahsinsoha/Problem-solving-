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
        map<char,int>mpp;

        string s;
        cin>>s;

        int i=0,j=0;
        int ans = INT_MAX;
        int flag=0;
        int n = s.size();
        mpp[s[0]]++;
        while(i<n && j<n)
        {

            if(mpp['1'] && mpp['2'] && mpp['3'])
            {
                flag=1;
                ans = min(ans,j-i+1);
                mpp[s[i]]--;
                i++;

            }

            else
            {
                j++;
                mpp[s[j]]++;



            }
        }

        if(flag )
            cout<<ans<<endl;
        else
            cout<<0<<endl;

    }


    return 0;

}










