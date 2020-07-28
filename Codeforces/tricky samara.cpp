#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long  int n, x=0,m=0,y, t;
    vector<int>v;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(int i=0; pow(2,i)<=n;i++)
           x=x+2*pow(2,i);
           m=n*(n+1)/2;
           y=m-x;
        cout<<y<<endl;

    }

    return 0;
}
