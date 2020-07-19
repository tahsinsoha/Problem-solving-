#include<bits/stdc++.h>
using namespace std;
int gcd(int d, int e){
if(d==0) return e;

return  gcd(e%d,d);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m)<<endl;

    return 0;
}

