#include<bits/stdc++.h>
using namespace std;
long long int arr[3000007], brr[3000007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin>>t;
    int n;
    map<int,int>mpp;
    while(t--)
    {
        cin>>n;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

            mpp[arr[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
        }
        if(arr[0]!=brr[0])
        {

            flag=1;
            cout<<"NO"<<endl;
            mpp.clear();
            continue;
        }

//cout<<mpp[0]<<mpp[1]<<mpp[-1]<<endl;

        for(int i=n-1; i>=1; i--)
        {
             //cout<<arr[i]<<mpp[arr[i]]<<endl;
            mpp[arr[i]]--;
               //  cout<<arr[i]<<mpp[arr[i]]<<endl;
            if(brr[i]<arr[i])
            {
               // cout<<mpp[-1]<<endl;
                if(!mpp[-1])
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }



            }


            else if(arr[i]<brr[i])
            {
               // cout<<mpp[1]<<endl;
                if(!mpp[1])
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }


            }

            if(flag==1)
                break;



        }

        if(!flag )
            cout<<"YES"<<endl;

  mpp.clear();

    }
    return 0;
}
