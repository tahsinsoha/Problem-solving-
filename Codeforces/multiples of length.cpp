#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{

        long long int n;
        cin>>n;

        for(int i=1; i<=n; i++)
            cin>>arr[i];

        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
            cout<<0<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<0<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<-arr[1]<<endl;

        }

        else
        {

            cout<<1<<" "<<1<<endl;
            cout<<-arr[1]<<endl;
            arr[1]=0;

            cout<<2<<" "<<n<<endl;

            for(int i=2; i<=n; i++)
            {
                long long int p = (arr[i]%n)*(n-1);
                cout<<p<<" ";
                arr[i]+=p;

            }
            cout<<endl;
            cout<<1<<" "<<n<<endl;

            for(int i=1; i<=n; i++)
                cout<<-arr[i]<<" ";
            cout<<endl;


        }



    return 0;

}











