#include<bits/stdc++.h>
using namespace std;
int main(){

int n,inp,cont,i,j;
int maxx=0;
vector<int>v;
cin>>n;
for(i=0;i<n;i++){
cin>>inp;
v.push_back(inp);
}
sort(v.begin(),v.end());
for(j=0;j<n;j++){
   cont=count(v.begin(),v.end(),v[j]);
   if(cont>maxx){
    maxx=cont;
   }

}

cout<<maxx<<endl;

return 0;
}
