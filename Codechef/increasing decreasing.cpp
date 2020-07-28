#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mpp;
        int flag=0;
        set<int>st;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);

            mpp[arr[i]]++;
            if(mpp[arr[i]]>2)
            {
                flag=1;
               // break;
            }
        }
        sort(arr+1,arr+1+n);
        vector<int>v;
       //  cout<<flag<<endl;

        if(flag==1 || mpp[arr[n]]>1 )
           {

            cout<<"NO"<<endl;
            continue;

           }




        else
        {
            cout<<"YES"<<endl;
            for(auto i: st)
            {
                cout<<i<<" ";
                v.push_back(i);

            }
            int sz = v.size();

            for(int i= sz-1; i>=0; i--)
            {

                if( mpp[v[i]]>1)
                    cout<<v[i]<<" ";
            }


            cout<<endl;
        }
    }


    return 0;

}









