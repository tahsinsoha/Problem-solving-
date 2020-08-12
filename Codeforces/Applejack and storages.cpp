#include<bits/stdc++.h>
#define maxx 1e5
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        mpp[x]++;

    }
    multiset<int>st;
    for(int i=1; i<=1e5; i++)
    {
        st.insert(mpp[i]);
    }

    int q;
    cin>>q;

    while(q--)
    {

        char c;
        int n;
        cin>>c>>n;

        st.erase(st.find(mpp[n]));
        if(c=='+')
            mpp[n]++;
        else
            mpp[n]--;

        st.insert(mpp[n]);

        int w = *prev(st.end());
        int y = *prev(prev(st.end()));
        int z = *prev(prev(prev(st.end())));

        // cout<<w<<" "<<y<<" "<<z<<endl;

        if(w>=4)
        {
            w-=4;
            if((w>=2 && y>=2) || (z>=2 && y>=2) || (w>=2 && z>=2) || y>=4 || z>=4 || w>=4 )
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }

        else
            cout<<"NO"<<endl;


    }



    return 0;

}











