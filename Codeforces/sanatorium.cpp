#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arr[4];

    for(int i=0; i<3; i++)
        cin>>arr[i];

    sort(arr,arr+3);
    long long sum=0;

    if(arr[2]-arr[1]>1)
        sum+=arr[2]-arr[1]-1;
    if(arr[2]-arr[0]>1)
        sum+=arr[2]-arr[0]-1;

    cout<<sum<<endl;


    return 0;

}




