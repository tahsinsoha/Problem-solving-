#include<bits/stdc++.h>
#define n 100000
using namespace std;
vector<long long int>prime,nx;
int arr[100010];
void sieve()
{
    arr[0]=arr[1]=1;
    for(long long int i=2; i<=n; i++)
    {
        if(!arr[i])
        {
            prime.push_back(i);
            for(long long int j=i*2; j<=n; j=j+i)
            {
                arr[j]=1;
            }
        }
    }
    sort(prime.begin(),prime.end());
    for(int i=0; i<prime.size() && prime[i]<=1000; i++)
    {
        if(arr[prime[i]+prime[i+1]+1]==0)
            nx.push_back(prime[i]+prime[i+1]+1);
    }

}
int main()
{
    sieve();
    /*  for(int i=0; i<100; i++)
      {
          cout<<prime[i]<<endl;

      }
      for(int i=0; i<100; i++)
      {
          cout<<nx[i]<<endl;

      }*/
    int nm,k;
    cin>>nm>>k;
    int flag=0;
//  cout<<nx[0]<<nx[1]<<endl;
    for(int i=0; i<nx.size(); i++)
    {
        if(nx[i]>=nm )
        {
            // cout<<nx[i]<<" "<<i<<endl;
            if(nx[i]>nm)
            {
                if(i>=k)
                {
                    flag=1;
                    cout<<"YES"<<endl;
                }
            }

            if(nx[i]==nm)
            {
                if(i+1>=k)
                {
                    flag=1;
                    cout<<"YES"<<endl;
                }
            }
            break;
        }


    }
    if(flag==0)
        cout<<"NO"<<endl;
    return 0;
}
