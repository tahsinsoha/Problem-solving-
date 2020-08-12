#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;

    int a,b;
    cin>>a>>b;

    int d1 = abs(x1-x2);
    int d2= abs(y1-y2);

    if(d1%a || d2%b)
        cout<<"NO"<<endl;

    else
    {
        d1/=a;
        d2/=b;

        if(d1%2 != d2%2)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }



    return 0;

}











