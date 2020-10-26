#include <bits/stdc++.h>
using namespace std;
vector<int> d[2000005];
set<int> s;
bool p[2000005];
int main()
{
    int n;
    cin>>n;
    for (int i=2; i<2000005; i++)
    {
        if (!p[i])
        {
            for (int x=i; x<2000005; x+=i)
            {
                d[x].push_back(i);
                p[x]=1;
            }
        }
        s.insert(i);
    }
    bool eq=1;
    for (int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        int cur=*s.begin();;
        if (eq)
        {
            cur=*s.lower_bound(a);
            if (cur!=a)
                eq=0;
        }
        cout<<cur<<" ";
        for (int i=0; i<d[cur].size(); i++)
        {
            int x = d[cur][i];
            for (int j=x; j<2000005; j+=x)
            {
                if (s.find(j)!=s.end())
                {
                    s.erase(j);

                }
            }
        }
    }
}
