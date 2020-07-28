#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
int brr[1000007];
int cs[1000007];
int main()
{
    int t;



    int n,m;
    cin>>n;

    for(int i=1; i<=n; i++)
    {

        cin>>arr[i];
        cs[i]=cs[i-1]+arr[i];

    }



    for(int i=1; i<=arr[1]; i++)
    {
        brr[i]=1;
    }


    for(int i=1; i<=n-1; i++)
    {
        brr[cs[i]+1] =1;
        // brr[cs[i+1]+1]=-1;

    }


    //  cout<<arr[0]<<" "<<brr[2]<<" "<<brr[3]<<endl;
    for(int i=arr[1]+1; i<=cs[n]; i++)
    {
        brr[i]+=brr[i-1];
    }





    cin>>m;
    vector<int>v;
    int b;
    for(int i=1; i<=m; i++)
    {
        cin>>b;
        v.push_back(brr[b]);
    }

    for(int i=0; i<v.size(); i++)
    {

        cout<<v[i]<<endl;
    }


    return 0;
}

