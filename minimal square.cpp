#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
int t;
cin>>t;
while(t--){

    int a,b;
    cin>>a>>b;

    int minn = min(a,b);
    int maxx = max(a,b);
    minn = minn+minn;

    if(minn< maxx) cout<<maxx*maxx<<endl;

    else cout << minn*minn<<endl;
}



return 0;


}














