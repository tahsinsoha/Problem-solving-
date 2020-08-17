#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{

    vector<int>v;
    string s;
    cin>>s;

    int cnt=0;
    int f=0;
    int g=0;

    for(int i=0; i<s.size(); i++)
    {

        if(s[i]=='R')
        {

            cnt++;
            f=1;
            g=1;
        }

        if(s[i]=='S')
        {
            //cout<<cnt<<endl;
            if(f==1)
                v.push_back(cnt);
            f=0;
            cnt=0;

        }
    }
    //cout<<cnt<<endl;
    if(s[s.size()-1]=='R')
        v.push_back(cnt);
    sort(v.begin(),v.end(), greater<int>());
    if(g==0)
        cout<<0<<endl;
    else
        cout<<v[0]<<endl;
}












