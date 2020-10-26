#include<bits/stdc++.h>
#define ll long long
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
        string s;
        cin>>n;
        cin>>s;

        vector<int>v;

        int p=1;

        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1])
                p++;

            else
            {
                v.push_back(p);
                p=1;
            }

        }

        v.push_back(p);
        int res=0,cnt=0;

        for(int i= v.size()-1; i>=0; i--)
        {
            if(v[i]>1)
                cnt+= v[i]-2; // minimum 2 ta same char thakle ekta move dite parbo, baki gula diye onno 1 char wala block ke help korbo

            else
            {
                if(cnt>0)
                    v[i]++,cnt--; // porer kono block theke dhaar nite parle,dhaar dewar moto char er poriman komailam, nijer block e ek jog korlam
            }
        }

        int o=0;

        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==1)
                o++;  // 1 length er block gula count kortesi
            else
                res++; // length 1 na hoile 1 ta step e ei block cover hobe

        }

        res+=(o+1)/2; // joto gula one ase,oder joray joray niye ekta step count korbo

        cout<<res<<endl;


    }


    return 0;

}













