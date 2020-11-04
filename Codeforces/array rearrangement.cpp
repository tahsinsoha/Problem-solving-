#include<bits/stdc++.h>
#define ll long long
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
      int n,x;
      cin>>n>>x;

      for(int i=1;i<=n;i++)
        cin>>arr[i];

         for(int i=1;i<=n;i++)
        cin>>cs[i];

        sort(cs+1,cs+1+n);
        reverse(cs+1,cs+1+n);

        int f=0;

        for(int i=1;i<=n;i++)
        {

        if(arr[i]+cs[i]>x)
        {
            f=1;
            break;
        }
        }

        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }


    return 0;

}















