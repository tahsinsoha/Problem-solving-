#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
int brr[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {

        int n;
        cin>>n;
        int jazz=INT_MAX;
        int jinx=INT_MAX;

        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            jazz=min(jazz,arr[i]);
        }

        for(int i=1; i<=n; i++)
        {
            cin>>brr[i];
            jinx=min(jinx,brr[i]);
        }

        long long  sum=0;
        for(int i=1; i<=n; i++)
        {
            sum+= max(abs(arr[i]-jazz), abs(brr[i]-jinx));
        }

        cout<<sum<<endl;




    }



    return 0;

}














