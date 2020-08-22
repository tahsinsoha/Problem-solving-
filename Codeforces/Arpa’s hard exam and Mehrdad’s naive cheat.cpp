#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
long long int bigmod(long long int a, long long int b, long long int c)
{
    long long int res=1;
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

    long long  int n;
    cin>>n;
    cout<<bigmod(1378,n,10)%10<<endl;

    return 0;

}












