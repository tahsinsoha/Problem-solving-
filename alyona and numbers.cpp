#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,ans=0;
    cin>>n>>m;
for(int i=1;i<=n;i++){
    ans+=(m+(i%5))/5;

}

  cout<<ans<<endl;
    return 0;
}

