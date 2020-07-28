#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,d,minn,a;
    set<int>s;
    vector<int>v,cs;
    map<int,int>mp;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);

        }

        for(int i=0; i<d; i++)
        {
            mp[v[i]]++;
        }
        int ans = mp.size();
        int cnt =ans;

        for(int i=d; i<n; i++)
        {


            mp[v[i-d]]--;
            if(mp[v[i-d]]==0)cnt--;

            mp[v[i]]++;

             if(mp[v[i]]==1)cnt++;
                  ans = min(ans,cnt);
        }
        cout<<ans<<endl;
        mp.clear();
        v.clear();

}
return 0;
}


