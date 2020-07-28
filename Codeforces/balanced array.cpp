#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    long long int n;

    while(t--)
    {
        cin>>n;
        if((n/2) %2)
        {
            cout<<"NO"<<endl;
        }

        else
        {

            cout<<"YES"<<endl;
            long long  int x=2,y=1;
            long long sum1=0, sum2=0;
            for(int i=1; i<=n/2; i++)
            {
                cout<< x<<" ";
                sum1+=x;
                x+=2;
            }

            for(int i=1; i<=n/2-1; i++)
            {
                cout<< y<<" ";
                sum2+=y;
                y+=2;
            }
            cout<<sum1-sum2<<endl;
        }
    }
return 0;
}





