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
        long long n,x,m,l,r;
        cin>>n>>x>>m;
        long long minn=x,maxx=x;
        long long ans=1;
        while(m--){

            cin>>l>>r;

            if(l<=minn && r>=maxx){

             ans+= (minn-l)+(r-maxx);
               minn=min(minn,l);
            maxx=max(maxx,r);

            }

            else if( l>=minn && l<=maxx && r>=maxx) {
                    ans+= (r-maxx);
                      minn=min(minn,l);
            maxx=max(maxx,r);

            }

            else if( l<=minn && r>=minn && r<=maxx)

            {
                ans+=(minn-l) ;
              minn=min(minn,l);
            maxx=max(maxx,r);

            }



        }

        cout<<ans<<endl;

    }
    return 0;
}

















