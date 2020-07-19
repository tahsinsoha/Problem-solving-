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
        int n,m;
        cin>>n>>m;
        vector<string>v;
        string s;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            v.push_back(s);
        }


        string r,q;
        int flag=0;
        int maxx = INT_MIN;
        if(v.size()==1) {
            cout<<v[0]<<endl;
            continue;
        }
        for(int i=0; i<v.size(); i++)
        {
            string t;

            t = v[i];
            flag=0;
            for(int j = i+1; j<v.size(); j++)
            {
                string p  = v[j];
                int cnt = 0;
               // maxx = INT_MIN;
               set<int>st;
                for(int k=0; k<t.size(); k++)
                {
                    if(t[k]!=p[k])
                        cnt++;
                    //maxx=max(maxx,cnt);
                    if(cnt>maxx)
                    {
                        r = t;
                        q = p;
                        maxx=max(maxx,cnt);
                       // cout<<r<<" "<<q<<endl;
                    }
                    if(cnt>2)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
            if(flag==1)
                break;
        }

        if(flag==1)
            cout<<-1<<endl;
        else
        {

            for(int i=0; i<r.size(); i++)
                if(r[i]!=q[i])
                {
                    r[i]=q[i];
                    break;
                }
            cout<<r<<endl;
        }
    }
    return 0;
}













