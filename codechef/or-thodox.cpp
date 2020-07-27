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
        int bx=0;
         set<int>st;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            bx=bx|arr[i];

            st.insert(arr[i]);

        }
       cout<<bx<<endl;
       if(st.count(bx)) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }


    return 0;

}









