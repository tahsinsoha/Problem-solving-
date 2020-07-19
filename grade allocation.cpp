#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
int main()
{
    int t;
    cin>>t;
   long long int n,k;
    string s;
    while(t--)
    {
        cin>>n>>k;
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }

       cout<<min(sum,k)<<endl;

    }
    return 0;
}





