#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int a,b;
    cin>>a>>b;

    int sum = a+b;

    int ans1= sum/2;

    int ans2 = a-ans1;

    cout<<ans1<<" "<<ans2<<endl;


    return 0;

}













