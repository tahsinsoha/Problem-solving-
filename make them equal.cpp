#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n+5];
    set<int>s;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }

    s.clear();
    int minn = INT_MAX;
    int me=-1;
    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i)
                continue;
            if(arr[j]>i)
                s.insert(arr[j]-i);
            if(arr[j]<i)
                s.insert(i-arr[j]);

        }
        if(s.size()==1)
        {
            me=0;
            minn = min(minn,*s.begin());

        }
        s.clear();
    }
    if(me==-1)
        cout<<-1<<endl;
    else
        cout<<minn<<endl;

    return 0;
}



