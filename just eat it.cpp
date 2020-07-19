#include<bits/stdc++.h>
using namespace std;
int arr[100007];
int main()
{
    int n;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int sum=0;
        bool f=0,g=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
                f=1;
            sum+=arr[i];
        }
 int ts=0;
        if(f==0)
        {
            if((sum-arr[0])<sum && sum-arr[n-1]<sum)
                cout<<"YES"<<endl;

            else
                cout<<"NO"<<endl;
        }

        else
        {

            for(int i=0; i<n; i++)
            {
                if(arr[i]<0)
                {
                    if(ts>=sum)
                    {
                        cout<<"NO"<<endl;
                        g=1;
                        break;
                    }
                    else
                        ts=0;

                }
                else
                {
                    ts+=arr[i];
                }
            }

        }
        if(f==1 && g==0)
            cout<<"YES"<<endl;
    }
    return 0;
}


