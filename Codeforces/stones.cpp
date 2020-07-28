#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    int sum=0;
    while(t--)
    {
        cin>>a>>b>>c;
        sum=0;
        if(b==0)
            cout<<0<<endl;
        else
        {
            int minn = min(c/2,b);
            sum=sum+minn+minn*2;
           // cout<<minn<<endl;
           // cout<<sum<<endl;
            int rem = b-minn;
            int minnn = min(rem/2,a);
            //cout<<minnn<<endl;
            sum=sum+minnn+minnn*2;
            cout<<sum<<endl;
        }
    }

    return 0;
}
