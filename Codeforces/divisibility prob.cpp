#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b,c,d;

    while(t--)
    {
        cin>>a>>b;

        int cnt=0;

        if(a<b) cout<<(b-a)<<endl;

        else {

           if(a%b==0) cout<<0<<endl;

           else {

            int div = a/b;

            cout<<(b*(div+1))-a<<endl;
         }
        }





    }

    return 0;
}

