#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int cnt1,cnt2,cnt3,cnt4;
    cin>>cnt1>>cnt2>>cnt3>>cnt4;


    if((cnt1 != cnt4) || (cnt3 && (cnt1==0 || cnt4==0)))
    {
        cout<<0<<endl;
    }

    else
        cout<<1<<endl;


    return 0;

}

















