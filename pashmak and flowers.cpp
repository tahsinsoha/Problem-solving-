#include<bits/stdc++.h>
using namespace std;
long long  int arr[200007],brr[200007];
int main()
{

    int n;
    cin>>n;

    map<long long int,long long int>mpp;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;

    }

    sort(arr,arr+n);

    if(arr[0]==arr[n-1])
        cout<< arr[n-1]-arr[0]<<" "<<(mpp[arr[0]]*(mpp[arr[n-1]]-1))/2 <<endl;
    else
        cout<<arr[n-1]-arr[0]<<" "<<mpp[arr[0]]*mpp[arr[n-1]]<<endl;




    return 0;
}

