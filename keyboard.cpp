#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    char c;
    int cnt=0;
    map<char,int>mp;
    map<char,int> :: iterator it;
    while(t--)
    {
        cin>>s;
        cnt = 0;
        if(s.size()==1)
            cout<<s[0]<<endl;
        else
        {
            for(int i=0; i<s.size()-1; i++ )
            {
              //  if(i==0)
                    //cnt++;
            if(i== s.size()-2)
                {
                    if(s[i]==s[i+1] )
                    {
                        cnt+=2;
                        if(cnt%2!=0 || mp[s[i]]==0)
                            mp[s[i]]=cnt;
                    }

                    else
                    {
                        cnt++;
                        if(cnt%2!=0 || mp[s[i]]==0)
                            mp[s[i]]=cnt;
                        mp[s[i+1]]=1;

                    }

                }
                else
                {
                    if(s[i]==s[i+1])
                        cnt++;

                    else
                    {
                        cnt++;
                        if(cnt%2!=0 || mp[s[i]]==0)
                            mp[s[i]]=cnt;
                        cnt=0;
                    }

                }

            }
            for( c='a'; c<='z'; c++)
            {
                //  cout<<mp[c]<<" ";
                if(mp[c]%2!=0)
                    cout<<c;
            }
            cout<<endl;
        }
        mp.clear();
    }

    return 0;
}
