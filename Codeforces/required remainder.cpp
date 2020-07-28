#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
int t;
cin>>t;
while(t--){

    long long x,y,n;

    cin>>x>>y>>n;

     long long div = n/x;
     long long rem = n%x;
    // long long mul = div*x;

     if(rem ==y) cout<<n<<endl;
     else if(rem<y) cout<<(div-1)*x+y<<endl;
     else cout<< n- abs(rem-y)<<endl;
}
    return 0;

}












