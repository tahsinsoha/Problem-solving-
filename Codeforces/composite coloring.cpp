#include<bits/stdc++.h>
using namespace std;
int brr[20] = {2,3,5,7,11,13,17,19,23,29,31};
int arr[1007];
int ans[1007];
int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>arr[i];
        set<int>s;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<11; j++)
            {
                if(arr[i]%brr[j]==0)
                {
                   // cout<<j+1<<endl;
                    ans[i]=(j+1);
                    s.insert(j+1);
                    break;
                }
            }

        }
        int d[100];
        int x=0;
        for(auto p:s)
        {
            d[p]=++x;

        }
        cout<<s.size()<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<d[ans[i]]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

