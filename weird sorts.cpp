#include <bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int a[200007];
int b[200007];
int main()
{

    int t;
    int a,b;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;
        map<int,int>mpp;
        for(int i=1; i<=a; i++)
            cin>>arr[i];

        for(int i=1; i<=b; i++)
        {
            cin>>brr[i];

        }

        for(int i=1; i<=a; i++)
        {

            for(int j=1; j<=b; j++)
            {
                if(arr[brr[j]]> arr[brr[j]+1])

                    swap(arr[brr[j]], arr[brr[j]+1]);

            }
        }
        int flag=0;

        for(int i=1; i<a; i++)
        {
            if(arr[i]>arr[i+1])
            {

                cout<<"NO"<<endl;
                flag=1;
                break;

            }

        }

        if(!flag)
            cout<<"YES"<<endl;

    }

}







