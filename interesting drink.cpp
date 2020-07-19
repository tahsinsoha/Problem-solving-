#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,inp,cola,q;
   vector<int>v;
   //map<int,int>mpp;
     cin>>n;
   for(i=1;i<=n;i++){
     cin>>inp;
     v.push_back(inp);

   }
   sort(v.begin(),v.end());
    cin>>q;
    for(int j=1;j<=q;j++){
        cin>>cola;
      // int  countt = count (v.begin(), v.end(),cola );
        vector<int> ::iterator upp;
         upp=upper_bound(v.begin(),v.end(),cola);
        cout<<(upp - v.begin())<<endl;
    }

return 0;
}
