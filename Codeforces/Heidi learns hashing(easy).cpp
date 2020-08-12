#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    long long r;
    cin>>r;

    if(r%2==0)
        cout<<"NO"<<endl;

    else
    {
        long long y = (r-3)/2;

        if(y>0)
            cout<<1<<" "<<y<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;

}










