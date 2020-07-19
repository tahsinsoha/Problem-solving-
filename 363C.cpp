#include <bits/stdc++.h>
using namespace std;

string s;
bool omit[200007];

int main()
{
    cin>>s;
    string ans1, ans2;
    ans1.push_back(s[0]);
    if(s.size()>1)
        ans1.push_back(s[1]);

    int j=2;

    for( int i=2; i<s.size(); i++ )
    {
        if( s[i]==ans1[j-1] and ans1[j-1]==ans1[j-2] )
        {
            //omit[i]= 1;
            continue;
        }
        ans1.push_back(s[i]), j++;
    }

//    memset( omit, 0, sizeof(omit) );

    ans2.push_back(ans1[0]);
//    cout<<ans1.size()<<endl;
    if(ans1.size()>1)
        ans2.push_back(ans1[1]);
    if(ans1.size()>2)
        ans2.push_back(ans1[2]);

    j= 3;
//    cout<<ans2.size()<<endl;

    for( int i=3; i<ans1.size(); i++ )
    {
        if( ans1[i]==ans2[j-1] and ans2[j-2]==ans2[j-3])
        {
//            cout<<i<<" "<<ans1[i]<<endl;
            continue;
        }
        ans2.push_back(ans1[i]), j++;
    }

    cout<<ans2<<endl;
}
