#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        bool f=0;
        int one=0,zero=0;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            for(int i=0; i<s.size(); i++)
            {
                if(s.size()%2)
                    f=1;
                if(s[i]=='0')
                    zero++;
                else
                    one++;

            }



        }
        if(f)
            cout<<n<<endl;
        else
        {

            if(zero%2)
                cout<<n-1<<endl;
            else
                cout<<n<<endl;
        }

    }

    return 0;
}





