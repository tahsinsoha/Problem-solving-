#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{

        int n,m;
        cin>>n>>m;
        vector<string>v;
        string s;
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            v.push_back(s);
        }
      long long cnt =1;
      for(int i=0;i<m;i++){
            set<char>st;
      for(int j=0;j<v.size();j++){

           st.insert(v[j][i]);
      }
      cnt=(cnt*st.size())%1000000007;

      }

      cout<<cnt%1000000009<<endl;
    return 0;
}














