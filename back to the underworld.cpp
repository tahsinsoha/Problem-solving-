#include<bits/stdc++.h>
# define sz 20007
using namespace std;
vector<long long int>graph[sz];
long long  int colour[sz];

int main()
{
//vector<int>graph[100000];
    long long  int x,y,n,t;
    cin>>t;
    for(int j=1; j<=t; j++)
    {
        cin>>n;
        int long long maxx=0,cont0=0,cont1=0;
        /* vector<int>graph[100000];
         int colour[100000];
         int arr[100000],brr[100000];*/
        for(int i=0; i<sz; i++)
            graph[i].erase(graph[i].begin(),graph[i].end());
            memset(colour,-1,sizeof (colour));
        for(int k=0; k<n; k++)
        {
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);

        }
        maxx=0;
        for(long long int i=0; i<sz; i++)
        {
            if(!graph[i].empty()&&colour[i]==-1)
            {
                int cont0=0,cont1=0;
                queue<long long int>q;
              //  memset(colour,-1,sizeof (colour));
                colour[i]=0;
              //  colour[arr[0]]=0;
                q.push(i);
                //int cont0=1,cont1=0
                cont0++;
                while(!q.empty())
                {
                   long long  int u=q.front();
                    q.pop();
                    for(long long int i=0; i<graph[u].size(); i++)
                    {
                        if(colour[graph[u][i]]==-1)
                        {
                            if(colour[u]==0)
                            {
                                colour[graph[u][i]]=1;
                                cont1++;
                            }
                            else
                            {
                                colour[graph[u][i]]=0;
                                cont0++;
                            }
                            q.push(graph[u][i]);
                        }

                    }

                }
                maxx=maxx+max(cont0,cont1);


            }
        }
        cout<<"Case "<<j<<": "<<maxx<<endl;
    }

    return 0;
}
