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

        for(int i=1; i<=n; i++)
            cin>>arr[i];


        for(int i=1; i<=n; i++)
        {

            if(i%2)
            {

                if(arr[i]>0)
                    cout<<-1*arr[i]<<" ";
                else
                    cout<<arr[i]<<" ";
            }

            else
            {
                if(arr[i]<0)
                    cout<<-1*arr[i]<<" ";
                else
                    cout<<arr[i]<<" ";

            }
        }
        cout<<endl;
    }


    return 0;

}









