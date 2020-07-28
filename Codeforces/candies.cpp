#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a,b, n;

    cin>>t;
    while(t--)
    {

        cin>>n>>a>>b;
        char c = 'a';

        string s ="";
        for(int i=0; i<b; i++)
        {

            s+=char(c+i);

        }


        for(int i=b; i<a; i++)
        {
            s+= 'a';

        }

       // cout<<s<<endl;

       // cout<<s[0]<<s[1]<<endl;
        for(int i=0; i<n; i++)
        {
            cout <<s[i%a];
        }


        cout<<endl;

    }

    return 0;
}


