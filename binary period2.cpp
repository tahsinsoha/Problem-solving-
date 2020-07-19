#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        int sz = s.size();
        int one=0;


        for(int i=0; i<s.size()-1; i++)
        {

            if(s[i]!=s[i+1])
                one=1;
        }

        if(one==0)
        {
            cout<<s<<endl;
            continue;
        }
        for(int i=1; i<=sz; i++)
        {
            if(s[0]=='1')
                cout<<"10";
            if(s[0]=='0')
                cout<<"01";
        }
        cout<<endl;

    }
    return 0;
}




