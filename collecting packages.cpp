#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,y,n;
    pair<int,int>p[1007];
    while(t--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>x>>y;
            p[i]= pair<int,int>(x,y);
        }

        sort(p,p+n);
        bool flag=0;

        for(int i=0; i<n-1; i++)
        {
            if(p[i].second>p[i+1].second)
            {
                flag=1;
                break;
            }

        }

        if(flag==0)
        {
            cout<<"YES"<<endl;
            int x1=0,y1=0;
            for(int i=0; i<n; i++)
            {
                while(x1<p[i].first)
                {
                    cout<<"R";
                    x1++;
                }
                while(y1<p[i].second)
            {
                cout<<"U";
                y1++;
            }


        }
        cout<<endl;


    }
    else
        cout<<"NO"<<endl;
}
return 0;
}

