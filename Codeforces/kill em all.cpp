#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q,a;
    cin>>q;
    set<int>s;
    vector<int>v;
    while(q--)
    {
        int n,r;
        cin>>n>>r;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            s.insert(a);
        }
        for(auto x:s)
        {
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<int>());


      //  for(int i=0;i<v.size();i++){
          //  cout<<v[i]<<" ";
      //  }
      //  cout<<endl;

        int cont = 1;
        for(int i=1; i<v.size(); i++)
        {
            if((v[i]-i*r)>0)
                cont++;
            else
                continue;
        }
        cout<<cont<<endl;
        v.clear();
        s.clear();
    }
    return 0;
}
