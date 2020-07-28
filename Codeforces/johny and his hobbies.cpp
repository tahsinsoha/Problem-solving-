#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        set<int>st;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        int flag=0;
        for(int i=1; i<=2048; i++)
        {
            set<int>v;
            flag=0;
            for(int j=1; j<=n; j++)
            {

                int p;
                p=arr[j]^i;
                //cout<<p<<endl;
                v.insert(p);
            }
            //flag=0;
            //cout<<v.size()<<st.size()<<endl;
            if(v==st)
            {
                flag=1;
                cout<<i<<endl;
                break;
            }
        }
        if(!flag)
            cout<<-1<<endl;

    }
    return 0;
}














