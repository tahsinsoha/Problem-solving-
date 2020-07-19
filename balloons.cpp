#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+5];
//cin>>n;
    int minn=INT_MAX;
    int ind;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<minn)
        {
            minn=arr[i];
            ind=i+1;
        }

    }
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<-1<<endl;
    }
    else if(n==2 &&(arr[0]==arr[1]))
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<1<<endl;
        cout<<ind<<endl;
    }
    return 0;
}
