#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n,x;

        cin>>n>>x;
        map<int,int>mpp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mpp[arr[i]]++;
        }
        int cnt=0 ;
        for(int i=1;; i++)
        {
            if(x==0)
                break;
            if(mpp[i]==0)
            {
                mpp[i]++;
                x--;

            }

        }

        for(int i=1;; i++)
        {

            if(mpp[i]==0)
                break;
            else
                cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}

