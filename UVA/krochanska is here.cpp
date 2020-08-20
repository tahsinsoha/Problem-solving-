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

        int n,m;
        cin>>n>>m;
        vector<int>v[100007]; //adjacency list
        map<int,int> used; // how many time a node is used in different lines
       // memset(used,0,sizeof(used));
        while(m--)
        {
            int x;
            cin>>x;

            while(x)
            {

                used[x]++;
                int y;
                cin>>y;
                if(y==0)
                {
                    break;
                }
                v[x].push_back(y);
                v[y].push_back(x);
                x=y;
            }

        }
        int lv[n+5]; //level of important nodes
        vector<int>imp; //list of important nodes

        for(int i=1; i<=n; i++)
        {
            if(used[i]>1)
            {
                imp.push_back(i);
            }
        }

        int p=INT_MAX;
        int c;
        for(int i=0; i<imp.size(); i++)
        {

            int x = imp[i];
            memset(lv,-1,sizeof(lv));
            lv[x]=0;
            long long ans=0;
            queue<int>q;
            q.push(x);

            while(!q.empty())
            {

                int u = q.front();
                q.pop();

                for(int i=0; i<v[u].size(); i++)
                {

                    int z = v[u][i];
                    if(lv[z]!=-1)
                    {
                        continue;
                    }
                    lv[z]=lv[u]+1;
                    if(used[z]>1)
                    {
                        ans+=lv[z];
                    }
                    q.push(z);
                }
            }
            if(ans<p)
            {
                p=ans;
                c=x;
            }
            if(ans==p)
            {
                c=min(c,x);
            }

        }

        cout<<"Krochanska is in: "<<c<<endl;


    }


    return 0;

}










