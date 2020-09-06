#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        sum+=x;

    }
   sort(v.begin(),v.end(),greater<int>());

   int m;
   cin>>m;

   for(int i=1;i<=m;i++){
    int x;
    cin>>x;
    cout<<sum-v[x-1]<<endl;

   }
    return 0;

}
















