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
        int d;
        string s;
        cin>>d;
        cin>>s;
            int odod=0, odev=0, evod=0, evev=0;
        for(int i=0;i<s.size();i++)
        {
            int k = s[i]-48;
            if(i%2==0)
            {
                if(k%2)
                    odod++;
                else
                    odev++;

            }

            else
            {
                if(k%2)
                    evod++;
                else
                    evev++;

            }
        }



        if(d%2)
        {
            if(odod>=1)
                cout<<"1"<<endl;
            else
                cout<<"2"<<endl;

        }

        else {
                 if(evev>=1)
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;



        }


    }


    return 0;

}













