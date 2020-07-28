#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n;
    long long int arr[100007];
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        long long mx= 0, mn= 1000000010;


        for(int i=0; i<n; i++)
        {
            if(i>0 && arr[i]==-1 && arr[i-1]!=-1 )
                mx= max(mx, arr[i-1]), mn=min(mn,arr[i-1]);


            if(i<n-1 && arr[i]==-1 && arr[i+1]!=-1 )
                mx= max(mx, arr[i+1]), mn=min(mn,arr[i+1]);



        }

        long long ans = (mn+mx)/2;

        for(int i=0; i<n; i++)
            if(arr[i]==-1)
                arr[i]=ans;

        long long fin=0;
        for(int i=0; i<n-1; i++)
            fin=max(fin,abs(arr[i]-arr[i+1]));

        cout<<fin<<" "<<ans<<endl;

    }

    return 0;
}
