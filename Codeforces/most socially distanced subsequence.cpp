#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f,l;
        vector<int>v;
        for(int i=1; i<=n; i++)
        {

            cin>>arr[i];
        }

        for(int i=1; i<=n; i++)
        {

            if(i==1 || i==n || (arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]))
                v.push_back(arr[i]);
        }

        cout<<v.size()<<endl;

        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";

        cout<<endl;


    }
    return 0;
}














