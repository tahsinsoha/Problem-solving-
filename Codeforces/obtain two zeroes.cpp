#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(b<a)
            swap(b,a);
        if((a+b)%3==0 && 2*a>=b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}














