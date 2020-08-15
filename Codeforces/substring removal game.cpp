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
        vector<int>v;
        string s;
        cin>>s;

        int cnt=0;
        int f=0;

        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='1')
            {

                cnt++;
                f=1;
            }

            if(s[i]=='0')
            {
                //cout<<cnt<<endl;
                if(f==1)
                    v.push_back(cnt);
                f=0;
                cnt=0;

            }
        }
        //cout<<cnt<<endl;
        if(s[s.size()-1]=='1')
            v.push_back(cnt);
        sort(v.begin(),v.end(), greater<int>());
        int ans=0;


        for(int i=0; i<v.size(); i+=2)
        {
            ans+=v[i];
        }

        cout<<ans<<endl;

    }


    return 0;

}










