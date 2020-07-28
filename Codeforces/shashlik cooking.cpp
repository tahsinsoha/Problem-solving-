#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    int n,k;

    cin>>n>>k;
    int l = 2*k+1;
    vector<int>v;
    if( n%l  && n%l <k+1) {

        for(int i=1;i<=n;i+=l)
            v.push_back(i);
    }

    else {

        for(int i=k+1;i<=n;i+=l)
            v.push_back(i);
    }

    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";

    cout<<endl;

    return 0;
}













