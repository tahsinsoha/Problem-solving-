#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    string ans= "";
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0' || s[i]=='1')
            continue;

      else  if(s[i]=='2' || s[i]=='3' || s[i]=='5' || s[i]=='7')
            ans+=s[i];

        else if(s[i]=='4')
            ans+="322";

        else if(s[i]=='6')
            ans+="53";

        else if(s[i]=='8')
            ans+="7222";

        else if(s[i]=='9')
            ans+="7332";

    }
    sort(ans.begin(),ans.end(), greater<int>());

    cout<<ans<<endl;

    return 0;
}

