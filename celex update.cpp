#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long x1,y1,x2,y2;

        cin>>x1>>y1>>x2>>y2;

        if(x1==x2 || y1==y2)
            cout<<1<<endl;

        else
        {

            long long sum = (x2-x1)*(y2-y1)+1;

            cout<<sum<<endl;
        }
    }
    return 0;
}















