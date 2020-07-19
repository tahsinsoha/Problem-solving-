#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){

    string s;
    cin>>s;

    cout<<s[0]<<s[1];

    for(int i=2;i<s.size();i++)
    {

        if(i%2) cout<<s[i];
    }

    cout<<endl;
   }
    return 0;

}

