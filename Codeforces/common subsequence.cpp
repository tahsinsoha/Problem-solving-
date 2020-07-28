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

       set<int>st;
       int n,m;
       cin>>n>>m;

       for(int i=1;i<=n;i++) {
        cin>>arr[i];
        st.insert(arr[i]);
       }
        for(int i=1;i<=m;i++) {
        cin>>cs[i];

        }
        int ans=-1;
        int f=0;

        for(int i=1;i<=m;i++) {
            if(st.count(cs[i])) {

                ans=cs[i];
                f=1;
                break;

            }

       }

     if(f==1){
        cout<<"YES"<<endl;
        cout<<1<<" "<<ans<<endl;
     }

     else {
        cout<<"NO"<<endl;
     }

    }


    return 0;

}









