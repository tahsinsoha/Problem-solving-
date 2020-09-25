#include<bits/stdc++.h>
using namespace std;
int arr[1000007];
int cs[1000007];
long long ps[1000007];

int main()
{
    int mx=1;
    int n;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        cout << "? "<<mx<<' '<<i<< endl;
        int a;
        cin>>a;

        cout << "? "<<i<<' '<<mx<< endl;
        int b;
        cin>>b;

        if(a>b)
        {
            arr[mx]=a;
            mx=i;

        }
        else
        {
            arr[i]=b;

        }

    }
    arr[mx]=n;
    cout<<"! "<<endl;
    for(int i=1; i<=n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;

}










