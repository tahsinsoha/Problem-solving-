#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,d,minn,a;
    set<int>s;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        for(int i=0; i<n; i++)
        {
       cin>>a;
       v.push_back(a);

        }
        minn = INT_MAX;
        int j;
        for(int i=0; i<=v.size()-d; i++)
        {
            for(int j=i; j<d+i; j++)
            {
                s.insert(v[j]);
            }
            int sz = s.size();
            minn= min(minn,sz);

            s.clear();
        }
        cout<<minn<<endl;
        v.clear();
        s.clear();

    }
    return 0;
}

