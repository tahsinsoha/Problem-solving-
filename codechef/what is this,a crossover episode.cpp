#include<bits/stdc++.h>
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
        cin>>d;

        if(d==0)
            cout<<'a'<<endl;

        else
        {
            cout<<d*2<<endl;
            for(int i=1; i<=d; i++)
                cout<<'a';

            for(int i=1; i<=d; i++)
                cout<<'b';

            cout<<endl;

        }
    }


    return 0;

}









