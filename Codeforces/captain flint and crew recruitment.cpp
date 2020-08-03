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
        int n;
        cin>>n;

        if(n<=30)
            cout<<"NO"<<endl;

        else
        {
            cout<<"YES"<<endl;
            int a=6,b=10,c=14;
            int diff= n-a-b-c;
            //cout<<diff<<endl;

            if(diff==10|| diff==14 || diff==6)
                cout<<6<<" "<<10<<" "<<15<<" "<<(n-6-10-15)<<endl;

            else
                cout<<6<<" "<<10<<" "<<14<<" "<<n-6-10-14<<endl;
        }

    }



    return 0;

}











