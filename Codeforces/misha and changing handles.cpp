#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    map<string,string>mpp1;
    map<string,string>mpp2;
    // map<string,int>mp;
    while(t--)
    {

        string s,t;
        cin>>s>>t;
        if(mpp2.find(s)!=mpp2.end())
        {
            mpp1[mpp2[s]]=t;
            mpp2[t] = mpp2[s];
            // cout<<mpp1[mpp2[s]] <<" "<<mpp2[t]<<endl;


        }
        else
        {

            mpp1[s]=t;
            mpp2[t]=s;

            // cout<<mpp1[s]<<endl;
            // cout<<mpp2[t]<<endl;

        }


    }
    cout<<mpp1.size()<<endl;
    for(auto i: mpp1)
    {
        cout<<i.first<<" "<<i.second<<endl;;
    }

    return 0;

}









