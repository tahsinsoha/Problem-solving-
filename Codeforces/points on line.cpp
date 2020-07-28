#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;

int a[100007];
cin>>n>>d;
long long ans = 0;
for(int i=0;i<n;i++)
    cin>>a[i];

    for(int i=0,j=0;i<n;i++)
    {
        while(j<n && a[j]-a[i]<=d) j++;
        long long x = j-i-1;
    ans +=  x*(x-1)/2;


    }
    cout<<ans<<endl;
    return 0;
}





