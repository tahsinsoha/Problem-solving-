#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int flag=0;
        int maxx=INT_MAX;
        set<int>ans;
        for(int i=0; i<=50; i++) // 1,2,.... theke shuru korlam
        {
            int cnt=0;
            set<int>st;
            int p=i;
            for(int j=1; j<=50; j++) // diff koto koto nicchi
            {
                if(i!=0)
                {
                    st.insert(i);
                    for(int k=2; k<=n; k++) // array koto koto lagbe
                    {
                        p+=j;
                        st.insert(p);
                    }
                }

                else
                {
                    for(int k=1; k<=n; k++) // array koto koto lagbe
                    {
                        p+=j;
                        st.insert(p);
                    }
                }

                p=i;
                if(st.find(x)!=st.end() && st.find(y)!=st.end())
                {
                    if(*st.rbegin()<maxx)
                    {
                        maxx = *st.rbegin();
                        ans=st;
                    }
                }

                st.clear();

            }
        }

        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;

}




















