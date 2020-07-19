#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a,minn=0,pll=0,zero=0,stm=0,d,e,stp=0;
  //  vector<ll>v,v2;
    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a<0)
        {
            minn++;
            d =abs(a)-1;
            stm += d;
           // v.push_back(d);

        }
        else if(a>0)
        {
            pll ++;
            e =(a-1);
            stp+=e;
           // v2.push_back(e);

        }
        else if(a==0)
            zero++;
    }
//cout<<minn<<pll<<endl;
   // sort(v.begin(),v.end());
   // sort(v2.begin(),v2.end());
    if((minn&1) && (zero==0))
    {
        //if(v2[0]<v[0])
            cout<<stm+stp+2<<endl;
        //else
           // cout<<stm+stp+2+v[0]<<endl;
    }
    else
    {
        cout<<stm+stp+zero<<endl;
    }
    return 0;
}

