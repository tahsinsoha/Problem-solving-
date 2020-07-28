#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    map<unsigned long long int,unsigned  long long int>mp;
    cin>>n;
    vector<unsigned long long int>v;

    for(unsigned long long int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(n%i!=i)
            {
                v.push_back(i);
                v.push_back(n/i);
            }
            else
                v.push_back(i);
        }
    }
    sort(v.begin(),v.end());

   // for(int i=0;i<v.size();i++){
      //  cout<<v[i]<<" ";
   // }
  //  cout<<endl;
    for(int i=2; i<=1000000; i++)
    {
        mp[i*i]=1;

    }
    //cout<<mp[25]<<endl;
    int flag=0;
    for(unsigned long long int i=v.size()-1; i>=0; i--)
    {
        flag=0;
        for(unsigned long long int j=1; j*j<=v[i]; j++)
        {

            if(v[i]%(j)==0 )
            {
              if(mp[j]==1 || mp[v[i]/j]==1)
              {
                  flag=1;
               //   cout<<v[i]<<" "<<j<<endl;
                  break;
              }
            }
        }

        if(flag==0)
        {
            return cout<<v[i]<<endl,0;
        }

    }
    return 0;
}
