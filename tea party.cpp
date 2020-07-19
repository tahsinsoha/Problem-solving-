#include<bits/stdc++.h>
using namespace std;
int arr[107];
int ans[107];
int main()
{

    int n,w;

    cin>>n>>w;
    map<int,int>mpp;
    vector<pair<int,int>>v;
    int a;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        v.push_back({arr[i],i});

    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    int sum=0;

    for(int i=0; i<v.size(); i++)
    {
        int f = v[i].first;
        int s = v[i].second;

        ans[s]= (f+1)/2;

        sum+=ans[s];


    }

    if(sum>w)
    {
        cout<<-1<<endl;
        return 0;
    }

    int baki = w-sum;
    //cout<<baki<<endl;
    int lagbe;
    int f1 = v[0].first;
    int s1 = v[0].second;
    lagbe= (min(baki, f1-(ans[s1])));
    baki-=lagbe;
    ans[s1]+=lagbe;

    //cout<<baki<<endl;
    for(int i=1; i<v.size(); i++)
    {
        int f = v[i].first;
        int s = v[i].second;
        int s2 = v[i-1].second;
        if(baki>0)
        {

            lagbe = min((f-ans[s]), min(baki, ans[s2]-ans[s]));

            ans[s]+=lagbe;
            baki-=lagbe;

        }

        else
            break;

        //  cout<<v[i]<<" "<<mpp[v[i]]<<" "<<baki<<endl;


    }

    // cout<<mpp[24]<<endl;
    int flag=0;

    for(int i=1; i<v.size(); i++)
    {
        int f = v[i].first;
        int s = v[i].second;
        int s2 = v[i-1].second;

        if(ans[s]>ans[s2])
        {
            flag=1;
            break;
        }

    }

    if(flag==1 || baki>0)
        cout<<-1<<endl;

    else
    {

        for(int i=1; i<=n; i++)
        {

            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}















