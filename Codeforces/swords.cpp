#include<bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long  n,a;
    cin>>n;
    vector<unsigned long long int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end(),greater<unsigned long long int>());
     if(n==2){
        cout<<1<<" "<<v[0]-v[1]<<endl;
        return 0;
    }
  unsigned  long long  mx = v[0];
   unsigned long long  g = 0;
    for(int i=1; i<n; i++)
    {
        g = __gcd(g,(mx-v[i]));
    }
    if(g==0){
        cout<<0<<" "<<0<<endl;
        return 0;
    }
  //  cout<<g<<endl;
    unsigned long long sum = 0;
    for(int i=1; i<n; i++)
    {
        sum = sum +( (mx-v[i])/g);
    }
    cout<<sum<<" "<<g<<endl;
    return 0;
}
