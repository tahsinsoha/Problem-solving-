#include<bits/stdc++.h>
using namespace std;
long long int arr[200007];
long long int brr[200007];
int main()
{
    vector<char>v1,v2;

    int n;
    cin>>n;
    int x,y;
    int sum1=0,sum2=0;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        if(x%2==0 && y%2)
            flag=1;
        if(y%2==0 && x%2)
            flag=1;


        sum1+=x;
        sum2+=y;

    }

    if(sum1%2==0 && sum2%2==0)
    {
        cout<<0<<endl;
        return 0;
    }

    else if( n==1 && ((sum1%2!=0)||(sum2%2!=0)))
    {
        cout<<-1<<endl;
        return 0;

    }
    else if(sum1%2 && sum2%2)
    {
        // cout<<flag<<endl;
        if(flag==1)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }

    else cout<<-1<<endl;

    return 0;
}













