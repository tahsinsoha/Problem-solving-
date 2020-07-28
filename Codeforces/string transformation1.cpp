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

        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;
        int f=0;
        for(int j=0; j<a.size(); j++)
        {
            if( a[j]>b[j])
            {

                f=1;
                break;

            }
        }
        if(f==1)
        {
            cout<<-1<<endl;
            continue;
        }

        vector<int>v;
        int res=0;
        for(int i=0; i<20; i++)
        {

            char c= 'a'+i;
            set<char>st;
            for(int j=0; j<a.size(); j++)
            {
                if(b[j]==c && a[j]<b[j])
                    st.insert(a[j]);
            }

            res+=st.size();

            for(int j=0; j<a.size(); j++)
            {

                if(a[j]!=b[j] && st.find(a[j])!=st.end())
                    a[j]=c;
            }

        }

        cout<<res<<endl;

    }


    return 0;

}










