#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,minn;
    int flag;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        cin>>s;
        //int sz = s.size();
         flag=0;
        minn = INT_MIN;
      //  cout<<s[2]<<endl;
        for(int j=0; j<s.size(); j++)
        {
          //  cout<<s[j]<<endl;
              if(s[j]=='1') {
                  //  cout<<j+1<<endl;
                    minn=max(minn, max((j+1), (n-j)));
                   flag=1;
                   // cout<<minn<<endl;
              }
        }
        if(flag==0) cout<<s.size()<<endl;
        else cout<<minn*2<<endl;

    }
    return 0;
}
