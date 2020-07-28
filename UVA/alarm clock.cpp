#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned   long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b>=a)
        {
            cout<<b<<endl;
            continue;
        }

        else
        {
            if(d>=c)
            {
                cout<<-1<<endl;
                continue;

            }

            else
            {
                unsigned long long diff1 = (a-b);
                unsigned long long diff2 = (c-d);

                unsigned long long ans = ((diff1+diff2-1)/diff2)*c+b;

                cout<<ans<<endl;
            }

        }



    }

    return 0;
}


