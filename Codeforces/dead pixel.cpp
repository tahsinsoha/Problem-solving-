#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
  int a,b,x,y;
    while(t--)
    {
         int a,b,x,y;
        cin>>a>>b>>x>>y;
        a=a-1;
        b=b-1;

        int x2 =  a-x;
        int y2 = b-y;
//cout<<a<<" "<<b<<" "<<x<<" "<<y<<" "<<x2<<" "<<y2<<endl;
        int ans = 0;

        ans= max(ans, (x *(b+1)));
        ans = max(ans,(x2*(b+1)));

          ans= max(ans, (y*(a+1)));
        ans = max(ans,(y2*(a+1)));

cout<<ans<<endl;
    }

    return 0;
}





