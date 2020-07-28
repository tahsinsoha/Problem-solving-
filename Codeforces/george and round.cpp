#include<bits/stdc++.h>
using namespace std;
int arr[200007];
int brr[200007];
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>a,b;
    set<int>st;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        a[arr[i]]++;


    }

    for(int i=1; i<=m; i++)
    {
        cin>>brr[i];
        b[brr[i]]++;


    }

   int r=0;

    for(int i=1; i<=n; i++)
    {
        if(b[arr[i]] >0)
        {
            b[arr[i]]--;
           // continue;
        }
        else
        {
            int f=1;
            for(int j=1; j<=m ; j++)
            {
                if(b[brr[j]]>0 && brr[j]>arr[i])
                {
                    f=0;
                    b[brr[j]]--;
                    break;
                }
            }
            r+=f;

        }

    }

    cout<<r<<endl;
    return 0;
}






