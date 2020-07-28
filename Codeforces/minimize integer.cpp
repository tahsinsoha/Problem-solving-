#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

    string s;
        cin>>s;
         vector<char>v,v2;
        for(int i=0; i<s.size(); i++)
        {
             if( (s[i]-'0')&1 )
            {
                v.push_back(s[i]);
            }
            else
                v2.push_back(s[i]);

        }
        int i=0,j=0;
         for( ;i<v.size() and j<v2.size(); )
        {
            if( v[i]<v2[j] )
                cout<<v[i], i++;
            else
                cout<<v2[j], j++;
        }

      while(i<v.size())
        cout<<v[i],i++;
      while(j<v2.size())
        cout<<v2[j],j++;

      cout<<endl;

    }
    return 0;
}
