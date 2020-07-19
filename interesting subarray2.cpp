#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>k;
    while(k--)
    {
        cin>> n;
        int arr[n+5];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        bool f=0;
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])>=2)
            {

                f=1;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                break;
            }
        }
        if(f==0)
            cout<<"NO"<<endl;
    }
    return 0;
}









