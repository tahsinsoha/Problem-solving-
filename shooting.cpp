#include<bits/stdc++.h>
using namespace std;
int cnt[2005];
int cnt1[2005];
int pos[2005][2005];
int pos1[2005][2005];
int neww[2005];
vector<int>v,temp;
map<int,int>m;
int main()
{
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        temp.push_back(a);
        cnt1[a]++;
        pos1[a][cnt1[a]]=i+1;
//cout<<pos1[a][cnt1[a]]<<" ";
        // m[a]++;

    }
 //   cout<<endl;
    int sum=0;
    sort(v.begin(),v.end(), greater<int>());
    for(int i=0; i<v.size(); i++)
    {
        cnt[v[i]]++;
        pos[v[i]][cnt[v[i]]] =i+1;
//cnt[v[i]]++;
        sum=sum+v[i]*i+1;
//cout<<pos[v[i]]<<endl;
    }

    cout<<sum<<endl;
    for(int i=0; i<n; i++)
    {
        // cout<<m[v[i]]<<endl;
        neww[v[i]]++;
        cout<<pos1[v[i]][neww[v[i]]]<<" ";
    }
    return 0;
}
