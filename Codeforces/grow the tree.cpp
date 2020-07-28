#include<bits/stdc++.h>
using namespace std;
int main()
{
  int  n;
  long long a;
    vector<long long int>v;
    cin>>n;
    for(int  i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(), greater<long long int>());
    long long p = (n+2-1)/2;
  long long  sum1=0,sum2=0;

    for(int  i=0; i<p; i++)
    {
        sum1+=v[i];
    }

    for(int i=p; i<v.size(); i++)
    {
        sum2+=v[i];
    }

    cout<<sum1*sum1+sum2*sum2<<endl;
    return 0;
}
