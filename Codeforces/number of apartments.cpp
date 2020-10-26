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
        int n;

        cin>>n;

        if(n<10 )
        {
            if(n==1 || n==2 || n==4 )
                cout<<-1<<endl;

            else if(n==3)
                cout<<1<<" "<<0<<" "<<0<<endl;

            else if(n==5)
                cout<<0<<" "<<1<<" "<<0<<endl;

            else if(n==6)
                cout<<2<<" "<<0<<" "<<0<<endl;

            else if(n==7)
                cout<<0<<" "<<0<<" "<<1<<endl;

            else if(n==8)
                cout<<1<<" "<<1<<" "<<0<<endl;

            else if(n==9)
                cout<<3<<" "<<0<<" "<<0<<endl;

        }

        else
        {
            if(n%7==0 )
                cout<<0<<" "<<0<<" "<<n/7<<endl;

            else if(n%7==1)
                cout<<1<<" "<<1<<" "<<(n/7)-1<<endl;

            else if(n%7==2)
                cout<<3<<" "<<0<<" "<<(n/7)-1<<endl;
            else if(n%7==3)
                cout<<1<<" "<<0<<" "<<(n/7)<<endl;
            else if(n%7==4)
                cout<<2<<" "<<1<<" "<<(n/7)-1<<endl;
            else if(n%7==5)
                cout<<0<<" "<<1<<" "<<(n/7)<<endl;

            else if(n%7==6)
                cout<<2<<" "<<0<<" "<<(n/7)<<endl;
        }

    }

    return 0;

}














