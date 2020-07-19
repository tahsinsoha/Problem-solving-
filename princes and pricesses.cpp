#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(n%2==0 && k%2)
        {
            cout<<"NO"<<endl;
            continue;
        }

        else if( n%2  && k%2==0)
        {

            cout<<"NO"<<endl;
            continue;

        }
        else
        {

            int sq = sqrt(n);

            if(k<=sq   )
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }


    return 0;
}


