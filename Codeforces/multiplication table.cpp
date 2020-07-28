#include<bits/stdc++.h>
using namespace std;
unsigned long long arr[1005][1005];
unsigned long long ans[1005];
unsigned long long  a,b,an;
int bigmod(int a, int b, int c)
{
    int res=1;
    while(b>0)
    {
        if(b&1)
            res= ((res%c) * (a%c))%c;
        b=b>>1;
        a= (((a%c) *(a%c))%c);

    }
    return res%c;
}
int main()
{
    int n;
    cin>>n;

    //  a = 99990000;
    //  b = 99980000;
    // an = (a*b)/99970002;
    //  cout<<(a*b)/99970002<<endl;
    // cout<<sqrt(an)<<endl;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>arr[i][j];

    for(int i=1; i<=n-2; i++)
    {

        a = ((arr[i][i+1])*(arr[i+1][i+2]))/(arr[i][i+2]);
        a = sqrt(a);
        ans[i+1]=a;
        //  cout<<ans[i+1]<<endl;

    }
    // a = arr[n-1][n-2]/ans[n-2];
    // ans [n-1] =a;

    a = arr[2][n]/ans[2];
    ans [n] =a;

    a = arr[1][2]/ans[2];
    ans [1] =a;

    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    return 0;
}
