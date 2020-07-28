#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;

    cin>>n>>k;
    pair<int,int>p[n+7];

    int arr[n+7];
    map<int,int>mp;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int a;
    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a%arr[i])
            p[i] = pair<int,int>(a/arr[i], a%arr[i]);

        else
            p[i] = pair<int,int>(a/arr[i], arr[i]);

        mp[a/arr[i]]+= p[i].second;

    }

    sort(p,p+n);
    ans = p[0].first;
    while(k>0){
    for(int i=0; i<n-1; i++)
    {
        if(mp[p[i].first] <= k) ans ++;


        }

    }

    return 0;
}
