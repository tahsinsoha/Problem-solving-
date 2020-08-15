#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int n;
    cin>>n;
    int sx,sy;
    cin>>sx>>sy;
    int x,y;
    int l=0,r=0,u=0,d=0;

    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;

        if(x<sx)
            l++;
        if(x>sx)
            r++;
        if(y<sy)
            d++;
        if(y>sy)
            u++;

    }

    int ans= max({l,r,u,d});
    cout<<ans<<endl;
    if(ans==l)
        cout<<sx-1<<" "<<sy<<endl;
    else if(ans==r)
        cout<<sx+1<<" "<<sy<<endl;

    else if(ans==u)
        cout<<sx<<" "<<sy+1<<endl;

    else if(ans==d)
        cout<<sx<<" "<<sy-1<<endl;


    return 0;

}











