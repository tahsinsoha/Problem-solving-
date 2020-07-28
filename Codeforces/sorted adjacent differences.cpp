#include<bits/stdc++.h>
using namespace std;

long long int arr[100007] ;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<int,int>mpp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }

        sort(arr,arr+n);

//for(int i=0;i<n;i++) cout<<arr[i]<<" ";

//cout<<endl;
        int mid = n/2;


        cout<<arr[mid]<<" ";
//cout<<arr[mid-1]<<endl;
//cout<<arr[mid+1]<<endl;
        for(int i=1; i<=mid; i++)
        {
            if((mid-i)>=0)
                cout<< arr[mid-i]<<" ";
            if((mid+i)<n)
                cout<<arr[mid+i]<<" ";


        }
        cout<<endl;

    }

    return 0;
}

