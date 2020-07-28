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
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int l =INT_MIN, r=INT_MAX;

        for(int i=0; i<n; i++)
        {

            if(arr[i]<i)
                break;
            l=i;

        }

        for(int i=n-1; i>=0; i--)
        {

            if(arr[i]<n-1-i)
                break;

            r=i;

        }

        if(r<=l)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }

    return 0;

}









