#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
       cin>>a>>b;
       if(b>a) swap(a,b);

      cout<<min((a+b)/3,b)<<endl;

    }
    return 0;
}
















