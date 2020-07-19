#include<bits/stdc++.h>
using namespace std;
long long arr[200007];
int main()
{
    vector<string>v;

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        vector<long long>v;
        cin>>a>>b>>c;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(),v.end());

        if(v[2]>v[0]+v[1]+1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    return 0;
}














