#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    cin>>s;

    char c = s[0];
    cout<<"Mike"<<endl;
    char mn = c;
    for(int i=1; i<s.size(); i++)
    {
        if(mn<s[i])
            cout<<"Ann"<<endl;
        else
            cout<<"Mike"<<endl;

            mn = min(mn,s[i]);

    }

    return 0;
}

