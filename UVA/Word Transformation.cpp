#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,int>vis;
map<string,int>dis;
void bfs(string a, string b)
{
    queue<string>q;
    q.push(a);
    vis[a]=1;
    while(q.size())
    {
        string x = q.front();
        q.pop();
        for(int i=0; i<v.size(); i++)
        {
            string y = v[i];
            if(x.size()==y.size() && !vis[y])
            {
                int cnt=0;

                for(int i=0; i<a.size(); i++)
                {
                    if(x[i]!=y[i])
                        cnt++;
                }
                if(cnt==1)
                {

                    dis[y]=dis[x]+1;
                    vis[y]=1;
                    q.push(y);
                }
            }
        }
    }
}
int main()
{

    int t;
    cin>>t;
    int k=0;
    string s;
    while(t--)
    {
        if(k)
        {
            cout<<endl;
        }
        v.clear();

        while(1)
        {

            cin>>s;
            if(s=="*")
                break;
            v.push_back(s);

        }

        getchar();

        while(getline(cin,s))
        {
            if(s.size()==0)
                break;

            string a,b;

            stringstream ss;
            ss<<s;
            ss>>a>>b;

            vis.clear();
            dis.clear();
            bfs(a,b);

            cout<<a<<" "<<b<<" "<<dis[b]<<endl;


        }


        k++;


    }


    return 0;
}
