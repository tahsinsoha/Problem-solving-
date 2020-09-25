#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long brr[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        cin>>arr[i];
    sort(arr+1,arr+1+n);

    int p=n/2+1;

    for(int i=1; i<=n; i+=2)
    {
        brr[i]=arr[p];
        p++;
    }

    p=1;

    for(int i=2; i<=n; i+=2)
    {
            brr[i]=arr[p];
            p++;


    }
    int cnt=0;

    for(int i=2; i<=n-1; i++)
    {
        if(brr[i]<brr[i-1]&& brr[i]<brr[i+1])
            cnt++;

    }
    cout<<cnt<<endl;



    for(int i=1; i<=n; i++)
        cout<<brr[i]<<" ";

    cout<<endl;





    return 0;

}















