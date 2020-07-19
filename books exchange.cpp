#include<bits/stdc++.h>
using namespace std;
int pos[1000000];
int main()
{
    int q,n,a;
    vector<int>v;
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
            pos[a]=i+1;
            //mp[i+1]=a;

        }
        for(int i=0; i<n; i++)
        {
            int tmp = v[i];
            int tmp2=v[i];
            int j=0;
            int cnt=0;
            while(j!=tmp)
            {
                j= pos[tmp2];
                tmp2=pos[tmp2];
                cnt++;

            }
            cout<<cnt<<" ";
        }
        cout<<endl;
        v.clear();
      memset(pos,-1,sizeof(pos));
    }
    return 0;
}

