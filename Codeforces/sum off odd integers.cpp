#include<bits/stdc++.h>
using namespace std;
int p[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,a;
        cin>>n;
        map<int,int>mpp,pr;
        set<int>st;
        int minn =INT_MAX;
        for(int i=1; i<=n; i++)
        {

            cin>>k;
            minn=INT_MAX;
            for(int j=1; j<=k; j++)
            {

                cin>>a;
                if(!mpp[a])
                {
                    minn=min(a,minn);
                    pr[i]=minn;
                }

            }
            // cout<<minn<<endl;
            mpp[minn]=1;
            if(minn!=INT_MAX)
                st.insert(minn);
        }

        if(st.size()==n)
            cout<<"OPTIMAL"<<endl;

        else
        {
            int k,l;
            cout<<"IMPROVE"<<endl;
            for(int i=1; i<=n; i++)
            {
                //  cout<<pr[i]<<endl;
                if(pr[i]==0)
                {
                    //     cout<<i<<endl;
                    k=i;
                    break;
                }
            }

            for(int i=1; i<=n; i++)
            {
                // cout<<mpp[i]<<endl;
                if(mpp[i]==0)
                {
                    //  cout<<i<<endl;
                    l=i;
                    break;
                }
            }

            cout<<k<<" "<<l<<endl;

        }

    }


    return 0;
}

