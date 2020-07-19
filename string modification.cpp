#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        string t,u;
        string fin;

        pair<string,int>p = make_pair(s,1);
        for(int i=0; i<n; i++)
        {
            t=s.substr(i),u = s.substr(0,i);

            if((n-i)%2)
                reverse(u.begin(),u.end());

            p = min(make_pair(t+u,i+1),p);

        }
        cout<<p.first<<endl;
        cout<<p.second<<endl;
    }
    return 0;
}
