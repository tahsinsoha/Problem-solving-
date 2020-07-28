#include<bits/stdc++.h>
using namespace std;
bool allCharactersSame(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}
int main()
{
    int t;
    string s,s2;
    int flag;
    cin>>t;
    while(t--)
    {
        cin>>s;
          if (allCharactersSame(s)) {
            cout<<-1<<endl;
            continue;
          }
        string s2=s;
          reverse(s.begin(),s.end());
       if(s!=s2){
            cout<<s2<<endl;
            continue;
        }
      else{
            int j=0;
        for(int i=1;i<s2.size();i++) {
            if(s2[j]!=s2[i]) {swap(s2[j],s2[i]);
      break;
            }
        }
          for(int i=0;i<s2.size();i++) cout<<s2[i];
          cout<<endl;
      }

    }
    return 0;
}
