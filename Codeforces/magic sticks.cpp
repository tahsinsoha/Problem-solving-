
#include<bits/stdc++.h>
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

      int x,y;
      cin>>x>>y;

      if((x==1 && y==1) || ((x==3||x==2) && y<4) || x>=4)
        cout<<"yes"<<endl;

      else
        cout<<"no"<<endl;

    }


    return 0;

}








