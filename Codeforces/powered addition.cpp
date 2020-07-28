#include<bits/stdc++.h>
using namespace std;
long long int arr[100007];
int main()
{
    int t;
    int n;
    long long int a;
    cin>>t;
    while(t--)
    {
        cin>>n;

        long long maxx= 0;
        long long d;

        for(int i=0; i<n; i++)
        {

            cin>>arr[i];

        }

        for(int i=1; i<n; i++)
        {

            long long  int j=0;
            if(arr[i]<arr[i-1])
            {

                d=arr[i]-arr[i-1];
                while(d)
                {

                    d/=2;
                    j++;
                }


            maxx=max(maxx,j);
             arr[i]=arr[i-1];

            }
        }
        cout<<maxx<<endl;

    }
    return 0;
}

