#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
int a;
   vector<int>v,v1,v2;

   for(int i=1;i<=n;i++)
   {
     cin>>a;
     v.push_back(a);

   }
sort(v.begin(),v.end(), greater<int> ());

for(int i=0;i<n;i++){
if(i%2) v1.push_back(v[i]);
else v2.push_back(v[i]);

}




for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";

  for(int i=v1.size()-1;i>=0;i--)
    cout<<v1[i]<<" ";

cout<<endl;
    return 0;
}








