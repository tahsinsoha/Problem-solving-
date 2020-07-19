#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
long long cs[200007];
long long vis[200007];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    set<int>st;
    for(int i=n; i>=1; i--)
    {

        cs[i]=st.size();
        st.insert(arr[i]);



    }

   long long  int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(vis[arr[i]]==0 )
            cnt+=cs[i];
        vis[arr[i]]=1;
    }

    cout<<cnt<<endl;
    return 0;
}














