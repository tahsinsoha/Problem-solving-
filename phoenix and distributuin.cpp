#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k;
    while(t--)
    {
        string s;
        cin>>n>>k;
        cin>>s;
        sort(s.begin(),s.end());
        int f=0;
        for(int i=1; i<k; i++)
        {

            if(s[0]!=s[i])
                f=1;

        }

        if(f==1)
        {
            // cout<<f<<endl;
            cout<<s[k-1]<<endl;
        }
        else if(s[k]!=s[n-1])
        {
            //  cout<<2<<endl;

            cout<<s[0];

            for(int i=k; i<n; i++)
                cout<<s[i];

            cout<<endl;
        }

        else
        {
            cout<<s[0];

            for(int i=1; i<((n+k-1)/k); i++)
                cout<<s[k];

            cout<<endl;

        }



    }

    return 0;
}
