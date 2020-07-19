#include <bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long  int brr[200007];
long long int a[200007];
long long int b[200007];
int main()
{

    int t;

    int n;

    int ind;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n; i++)
        cin>>brr[i];

    vector<int>v,v1;
    for(int i=0; i<n; i++)
    {
        v.push_back(arr[i]-brr[i]);
        v1.push_back(brr[i]-arr[i]);
    }

    sort(v.begin(),v.end());
    int j;
    long long ans=0;
    for(int i=0; i<n; i++)
    {

        j=upper_bound(v.begin(),v.end(),v1[i])-v.begin();
        ans+=(n-j);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]>brr[i])
            ans--;
    }


    cout<<ans/2<<endl;

}





