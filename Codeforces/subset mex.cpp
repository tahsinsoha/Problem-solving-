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
       map<int,int>mpp;
       set<int>st,tt;


       for(int i=1;i<=n;i++)
       {
        cin>>arr[i];
        st.insert(arr[i]);
        mpp[arr[i]]++;
       }
       int cnt=0;
       int z,y;

       for(auto x: st)
       {

          if(cnt!=x)
          {

              break;
          }
            cnt++;
            mpp[x]--;
       }
       z=cnt;
      // cout<<z<<endl;

       for(int i=1;i<=n;i++)
       {
           if(mpp[arr[i]])
            tt.insert(arr[i]);
       }
       cnt=0;

        for(auto x: tt)
       {

          if(cnt!=x)
          {

              break;
          }
            cnt++;
            mpp[x]--;
       }
       y=cnt;
      // cout<<y<<endl;
       cout<<z+y<<endl;

       st.clear();
       tt.clear();
       mpp.clear();

    }


    return 0;

}









