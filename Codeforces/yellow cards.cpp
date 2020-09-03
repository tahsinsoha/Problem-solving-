#include<bits/stdc++.h>
using namespace std;
long long arr[507][507];
long long cs[1000007];
long long ps[1000007];

int main()
{

    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;

    if(k1>k2)
    {
        swap(k1,k2);
        swap(a1,a2);
    }

    int cnt= a1*(k1-1)+a2*(k2-1);
    int minn =max(0,n-cnt);
    int maxx;

    if(n<=a1*k1)
        maxx=n/k1;
    else
        maxx = a1+ ((n-a1*k1)/k2);

    cout<<minn<<" "<<maxx<<endl;



    return 0;

}










