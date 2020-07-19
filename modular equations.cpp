#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long a,b;

    cin>>a>>b;

    if(a<b)
        cout<<0<<endl;
    else if(a==b)
        cout<<"infinity"<<endl;

    else
    {

        long long diff = a-b;

        int cnt=0;

        for(int i=1; i<=sqrt(diff); i++)
        {

            if(diff%i==0 )
            {

                if( i>b )
                    cnt++;
                if((diff/i)!=i  && (diff/i)>b)
                    cnt++;




            }
        }

        cout<<cnt<<endl;
    }
    return 0;

}











