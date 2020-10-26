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
        int n;
        cin>>n;

      for(int i=1;i<=n;i++)
      {
          cin>>arr[i];
      }
      int p=-1;

       for(int i=1;i<=n;i++)
      {
          if(arr[i]==1 ){
            p=i;
            break;
          }
      }

      if(p==-1)
      {
          cout<<0<<endl;
          continue;
      }

      int sum=0;
      int z=p;

     // cout<<p<<endl;

      for(int i=z+1;i<=n;i++)
      {
          if(arr[i]==1){
            sum+=(i-p-1), p=i;
           // cout<<i<<endl;

          }



      }

      cout<<sum<<endl;
    }


    return 0;

}













