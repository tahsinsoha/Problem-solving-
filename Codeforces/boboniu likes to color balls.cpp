#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long r,g,b,w;

        cin>>r>>g>>b>>w;
        int odd=0,ev=0;

        if(r%2)
            odd++;
        else
            ev++;

        if(g%2)
            odd++;
        else
            ev++;

        if(b%2)
            odd++;
        else
            ev++;

        if(w%2)
            odd++;
        else
            ev++;

        //cout<<ev<<endl;
        if(ev==4)
            cout<<"YES"<<endl;
        else if(odd==1 && ev==3)
        {

            cout<<"YES"<<endl;
        }

        else
        {

            if(r && g && b){
                r--,g--,b--,w+=3;

                ev=0,odd=0;

            if(r%2)
                odd++;
            else
                ev++;

            if(g%2)
                odd++;
            else
                ev++;

            if(b%2)
                odd++;
            else
                ev++;

            if(w%2)
                odd++;
            else
                ev++;
            }

            if(ev==4)
                cout<<"YES"<<endl;
            else if(odd==1 && ev==3)
            {

                cout<<"YES"<<endl;
            }

            else
                cout<<"NO"<<endl;
        }



    }



    return 0;

}












