#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int arr[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
       // int arr[n+5];
        for(int i=0; i<4*n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+4*n);
        int i = 0;
        int j = 4*n-1;
        int area = arr[i]*arr[j];
        int flag = 0;

        while(i<j)
        {
            if(arr[i]==arr[i+1] && arr[j]==arr[j-1] && arr[i]*arr[j]==area)
            {
                i+=2;
                j-=2;
            }
            else
            {
                flag = 1;
                break;
            }

        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
