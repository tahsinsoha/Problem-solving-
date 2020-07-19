#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string>v;
    vector<string>v1;
    int n,m,i,j,k,l;
    string l1,l2,w;
    cin>>n>>m;
    for( i=1; i<=m; i++)
    {
      cin>>l1>>l2;
      v.push_back(l1);
      v1.push_back(l2);
}
    for( j=1;j<=n;j++){
        cin>>w;
        if(find(v.begin(), v.end(), w) != v.end()){
            for( l=0;l<v.size();l++){
                if(v[l]==w){
                        break;
                }
            }
          if(v1[l].size()<v[l].size()){
                   cout<<v1[l]<<" ";
          }
          else cout<<v[l]<<" ";
        }
        else {

            for( k=0;k<v1.size();k++){
                if(v[k]==w){
                    break;
                }
            }
                      if(v1[k].size()<v[k].size()){
                   cout<<v1[k]<<" ";
          }
          else cout<<v[k]<<" ";
        }
    }

    return 0;
}
