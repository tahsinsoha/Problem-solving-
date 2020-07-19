#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mpp;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            mpp[arr[i]]=i;

        }
        int flag=0;
        for(int i=1; i<=n-1; i++)
        {
            if(mpp[i+1] > mpp[i]+1)
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }

        }

        if(!flag)
            cout<<"YES"<<endl;

    }

    return 0;
}
