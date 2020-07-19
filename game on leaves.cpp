#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        int a,b;
        int cnt=0;
        for(int i=1; i<=n-1; i++)
        {
            cin>>a>>b;
            if(a==x || b==x)
                cnt++;
        }
        if(cnt>1 && n%2)
            cout<<"Ashish"<<endl;
        else if(cnt>1 && n%2==0)
            cout<<"Ayush"<<endl;
        else
            cout<<"Ayush"<<endl;

    }
    return 0;
}














