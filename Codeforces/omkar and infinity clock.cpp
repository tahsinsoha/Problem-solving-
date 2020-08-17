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
        long long k;
        cin>>n>>k;
        long long  maxx=INT_MIN;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            maxx=max(maxx,arr[i]);

        }

        if(k%2)
        {
            for(int i=1; i<=n; i++)
            {
                cout<<maxx-arr[i]<<" ";

            }
            cout<<endl;
        }

        else
        {

            long long maxx2=INT_MIN;
            for(int i=1; i<=n; i++)
            {
                arr[i]=maxx-arr[i];
                //  cout<<arr[i]<<endl;
                maxx2=max(arr[i],maxx2);


            }
            //    cout<<maxx2<<endl;

            for(int i=1; i<=n; i++)
            {
                cout<<maxx2-arr[i]<<" ";

            }
            cout<<endl;



        }






    }


    return 0;

}









