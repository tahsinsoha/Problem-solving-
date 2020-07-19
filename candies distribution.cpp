#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int l[1007],r[1007],arr[1007];

    for(int i=0; i<n; i++)
    {
        cin>>l[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>r[i];
    }

    for(int i=0; i<n; i++)
    {
        arr[i]= n-l[i]-r[i];
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<i; j++)
            if(arr[j]>arr[i])
                l[i]--;

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[j]>arr[i])
                r[i]--;

    for(int i=0; i<n; i++)
    {
        if(l[i]!=0 || r[i]!=0)
        {

            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}
