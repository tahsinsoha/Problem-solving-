#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];

int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        cin>>n>>k;
        set< int>st;

        for( int i=0; i<n; i++)
        {

            cin>>arr[i];
            st.insert(arr[i]);

        }
        int d;
        vector<int >v;
        if(st.size()>k)
            {
                cout<<-1<<endl;

                continue;

            }
        else if(st.size()<k)
        {
            for(int i=1; i<=n; i++)
            {

                st.insert(i);
                if(st.size()==k)
                    break;
            }
        }

        d = (10000/st.size());

        for(int i=0; i<d; i++)
        {
            for( auto j:st)
            {

                v.push_back(j);
            }
        }


        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        cout<<endl;

    }





    return 0;
}

















