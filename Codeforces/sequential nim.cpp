#include<bits/stdc++.h>
using namespace std;
long long int arr[1000007];

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        long long n;
        cin>>n;
        int one=0;
        int f=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(arr[i]!=1 && i!=n)
                f=1;
        }
        if(f==0)
        {
            if((n-1)%2)
                cout<<"Second"<<endl;
            else
                cout<<"First"<<endl;
            continue;

        }
        if(n==1)
        {
            cout<<"First"<<endl;
            continue;
        }

        int p=0;
        int j=0;

        for(int i=1; i<=n; i++)
        {



            if(arr[i]!=1)
            {
                j=i;
                break;
            }

        }

        if(j%2==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;

    }



    return 0;
}
