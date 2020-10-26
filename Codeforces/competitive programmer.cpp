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
        string s;
        cin>>s;

        int f=0,p=0,sum=0,z=0;

        for(int i=0; i<s.size(); i++)
        {
            int n = s[i]-48;

            if(n%2==0 )
                f++;
            if(n==0)
                p=1;

            sum+=n;


        }

        //cout<<f<<endl;


     if((sum%3==0 && f>=2 && p) )

            cout<<"red"<<endl;

        else
            cout<<"cyan"<<endl;

    }


    return 0;

}













