#include<bits/stdc++.h>
using namespace std;
int arr[507];
int brr[507];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
        int z=0,o=0;
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
            if(brr[i]==1)
                o++;
            else
                z++;
        }
           int f=0;
        if(o && z)
            cout<<"YES"<<endl;

        else
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]!=v[i])
                    f=1;
            }
            if(f)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }

    }

    return 0;

}
















