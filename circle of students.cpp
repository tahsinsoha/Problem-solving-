#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+5];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        bool f= 0, l = 0;

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]+1==arr[i+1])
                continue;
            if(arr[i]==n && arr[i+1]==1)
                continue;
            if(arr[i]==1 && arr[i+1]==n)
                continue;
            else
            {
                f=1;
                break;
            }

        }
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]-1==arr[i+1])
                continue;
            if(arr[i]==n && arr[i+1]==1)
                continue;
            if(arr[i]==1 && arr[i+1]==n)
                continue;
            else
            {
                l=1;
                break;
            }

        }

        if(l==0 || f==0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
