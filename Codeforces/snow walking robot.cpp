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

        string s;
        cin>>s;
        int l=0,r=0,u=0,d=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                l++;
            if(s[i]=='R')
                r++;
            if(s[i]=='U')
                u++;
            if(s[i]=='D')
                d++;
        }

        if(l && r && u && d)
        {

            int lr = min(l,r);
            int ud= min(u,d);

            cout<<2*(lr+ud)<<endl;

            for(int i=1; i<=lr; i++)
                cout<<"L";
            for(int i=1; i<=ud; i++)
                cout<<"U";
            for(int i=1; i<=lr; i++)
                cout<<"R";
            for(int i=1; i<=ud; i++)
                cout<<"D";

            cout<<endl;

        }

        else if (l && r)
        {
            cout<<2<<endl;
            cout<<"LR"<<endl;
        }
        else if (u && d)
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
        }
        else
            cout<<0<<endl;

    }
    return 0;

}










