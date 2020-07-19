#include<bits/stdc++.h>
using namespace std;
int par[100];

int Find( int u )
{
    if(u==par[u])
        return u;
    par[u]= Find(par[u]);
    return par[u];
}
void Union( int a, int b )
{
    int u= Find(a);
    int v= Find(b);

    if(u!=v)
        par[u]= v;
}
int main()
{
    int t;
    string st;
     string sg;
    set<char>s;
    cin>>t;


    char a,b,c;

    while(t--)
    {
        s.clear();
        cin>>c;
        for( char i='A';i<=c;i++ )
		par[int(i-64)]= int(i-64);


        getchar();
        while(getline(cin,sg))
        {
            if(sg[0]=='\0') break;

            int x,y;

            x=int(sg[0]-64);
            y=int(sg[1]-64);

            Union(x,y);

        }



         for( char i='A'; i<=c; i++)
    {
        s.insert(Find(par[int(i-64)]));

    }
    cout<<s.size()<<endl;
   if(t) cout<<endl;

    }

    return 0;
}
