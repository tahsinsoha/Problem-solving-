#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int> :: iterator it;
    int z,i,m,l,c=1,j;
    while(1)
    {
        cin>>z>>i>>m>>l;
        if(z==0 && i==0 && m==0 && l==0)
        {
            break;
        }
        while(1)
        {
            v.push_back(l);
            l = (z*l+i)%m;
            it = find(v.begin(),v.end(),l);
            if(it!=v.end())
            {
                for( j=0; v[j]!=*it; j++) {}
                cout<<"Case "<<c<<": "<<v.size()-j<<endl;
                break;
            }
        }
        v.clear();
        c++;
    }

    return 0;
}
