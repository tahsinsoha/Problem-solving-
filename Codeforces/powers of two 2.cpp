#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k;

    cin>>n>>k;

    long long int arr[k];
    for(long long int i=0; i<k; i++ )
        arr[i]=1;


    long long int sum=k;

    for(int i=k-1; i>=0; i--)
    {
        while((sum+arr[i])<=n)
        {
          //  cout<<sum<<" "<<arr[i]<<endl;

            sum+=arr[i];
            arr[i]*=2;
            cout<<sum<<" "<<arr[i]<<endl;
        }

    }
    if(sum!=n)
    {
        cout<<"NO"<<endl;
    }
    else
    {


        cout<<"YES"<<endl;


    for(int i=0; i<k; i++)
    {
        cout<<arr[i]<<" ";


    }
    cout<<endl;

    }
    return 0;
}
