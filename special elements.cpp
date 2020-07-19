#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    long long  int n,k;
    string s;

    while(t--)
    {
        cin>>n;
        long long int brr[200007];
        long long  int maxx=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            maxx= max(maxx,arr[i]);
            brr[arr[i]]=0;
        }

        set<long long int>st;
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            sum=arr[i];
            for(int j=i+1; j<n; j++)
            {
                if(sum+arr[j]>maxx)
                    break;

                else
                {
                    sum+=arr[j];
                     brr[sum]=1;

                }
            }
        }
        int cnt=0;

        for(int i=0; i<n; i++)
        {
            //cout<<arr[i]<<" "<<brr[arr[i]]<<endl;
           cnt+=brr[arr[i]];

        }
        cout<<cnt<<endl;
    }
    return 0;
}











