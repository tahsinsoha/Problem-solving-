#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a;
    long long  int arr[n+7],brr[n+7];
    //  pair<int,int>p[n+7];

    vector<pair<long long int, int>>v,v1;
    long long  int mx=0;
    map<long long int,long long int>mpp;
    for(int i=0; i<m; i++)
    {
        mx=0;
        for(int i=0; i<n; i++)
        {

            cin>>a;
            v.push_back(make_pair(a,i));
            mx=max(mx,a);
        }




        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
        {
            if(v[i].first==mx)
            {
                v1.push_back(make_pair(v[i].first, v[i].second));
                mpp[v[i].second]++;
                break;
            }



        }


        //  cout<<v[sz-1].first<<" "<<v[sz-1].second<<endl;
        v.clear();

    }
    int s = v1.size();
    sort(v1.begin(),v1.end());
    long long int maxx=0;
    for(int i=0; i<n; i++)
    {
        // cout<<v1[i].first<<" "<<v1[i].second<<endl;
        maxx=max(maxx,mpp[i]);
    }
     int minn= 1e10;

    for(int i=0; i<v1.size(); i++)
    {
        if(mpp[v1[i].second]==maxx)
        {
            minn=min(minn,v1[i].second);

        }
    }

    cout<<minn+1<<endl;


    return 0;
}









