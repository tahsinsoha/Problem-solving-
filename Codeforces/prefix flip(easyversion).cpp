#include<bits/stdc++.h>
using namespace std;
long long arr[1000007];
long long cs[1000007];
long long ps[1000007];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;

        string a,b;
        cin>>a>>b;
        vector<int>v;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!=b[i])
            {
                v.push_back(i+1);
                v.push_back(1);
                v.push_back(i+1);
            }


        }

         cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }

        cout<<endl;


    }


    return 0;

}









