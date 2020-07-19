#include <iostream>
using namespace std;

int main()
{

    int t;
    int n;
    cin>>t;
    int arr[107], brr[107];
    while(t--)
    {
        cin>>n;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i]>>brr[i];

        }
        if(n==1)
        {
            if(arr[0]>=brr[0])
            {
                flag=1;
                cout<<"YES"<<endl;
                  continue;
            }

            else
            {
                cout<<"NO"<<endl;
                flag=1;
                continue;
            }
        }

        if( arr[0]<brr[0])
        {
            cout<<"NO"<<endl;
            flag=1;
            continue;
        }
        for(int i=1; i<n; i++)
        {

            if(((arr[i]-arr[i-1]) < (brr[i]-brr[i-1])) || (arr[i]<arr[i-1]) || (brr[i]<brr[i-1]) )
            {
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }

        if(!flag)
            cout<<"YES"<<endl;
    }

    return 0;
}

