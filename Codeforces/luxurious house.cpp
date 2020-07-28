#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    long long int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    long long int maxx=0;

    for(int i=n; i>=1; i--)
    {
        maxx=max(maxx,arr[i]);
        // cout<<maxx<<endl;
        brr[i] = (maxx);

    }




    for(int i=1; i<=n; i++)
    {


        if(arr[i]<brr[i+1] )
            cout<<0<<" ";



        else
            cout<<(brr[i]-arr[i]+1)<<" ";
    }


    cout<<endl;

    return 0;
}









