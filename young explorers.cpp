#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;
    string st;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mpp,ex;
        set<int>st,t;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            mpp[arr[i]]++;
            st.insert(arr[i]);

        }
        long long sum=0;
        long long r = 0;
        long long maxx=0;
        for(auto i:st)
        {
            if(mpp[i]%i)
            {
                r+=mpp[i]%i;
                if(r>=i)
                {
                    sum+=r/i;
                    r=r%i;
                }
            }
            sum+=mpp[i]/i;
        }
        cout<<sum<<endl;
    }
    return 0;
}




