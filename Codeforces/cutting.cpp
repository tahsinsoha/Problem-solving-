#include<bits/stdc++.h>
using namespace std;
int main()
{

    int long long  i,j,k,n,b,od=0,ev=0,finc=0,inp;
    cin>>n>>b;
    vector<long long int>v;
    multiset<long long int>st;
    for(i=1;i<=n;i++) {
        cin>>inp;
        v.push_back(inp);
    }
    for(i=0;i<n;i++){
        if(v[i]%2) od++;
        else ev++;
        if(od==ev){
            if((i+1)<=(n-1)) st.insert(abs(v[i+1]-v[i]));
        }
    }
   for(auto a:st) if(a<=b) finc++,b-=a;
    cout<<finc<<endl;
    return 0;
}




