#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n;
    vector<int>v,v2;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>m;

    for(int i=0; i<m; i++)
    {
        cin>>a;
        v2.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            vector<int>::iterator it = find(v.begin(), v.end(),v[i]+v2[j] );
            vector<int>::iterator it1 = find(v2.begin(), v2.end(),v[i]+v2[j] );
            if(it==v.end() && it1==v2.end())
            {
                cout<<v[i]<< " "<<v2[j]<<endl;
                return 0;
            }
        }
    }


    return 0;
}
