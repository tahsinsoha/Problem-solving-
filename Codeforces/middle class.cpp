#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    long long int n,x;
    long long int arr[100007];
    while(t--)
    {
        cin>>n>>x;
        int flag=0;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

            sum+=arr[i];
        }

        sort(arr,arr+n);




        if((sum/n) >= x)
        {
            cout<<n<<endl;
            flag=1;

        }

        else
        {

            for(int i=0; i<n-1; i++)
            {
                sum-=arr[i];

                if(sum/(n-i-1) >=x)
                {
                    cout<<(n-(i+1))<<endl;
                    flag=1;
                    break;
                }

            }
        }
        if(!flag)
            cout<<0<<endl;
    }

    return 0;
}
 
