#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,n,maxx,dist;
    int arr[105];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        for(int j=0; j<n; j++)
        {

            cin>>arr[j];
        }
         maxx=0,dist=0;
        for(int i=0; i<n; i++)
        {

            for(int j=i;j<n;j++){
                dist= __builtin_popcount(arr[i]^arr[j]);
                 maxx=max(dist,maxx);
            }


            }
     cout<<maxx<<endl;
    }

    return 0;
}
