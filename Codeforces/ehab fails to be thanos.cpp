#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;
    int flag=0;

    for(int i=1; i<=2*n; i++)
    {
        cin>>arr[i];
    }
    for(int i=2; i<=2*n; i++)
    {
        if(arr[i]!=arr[i-1])
            flag=1;
    }



    sort(arr+1,arr+1+2*n);
    if(flag==0)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(int i=1; i<=2*n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;


    return 0;

}
















