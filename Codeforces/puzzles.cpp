#include<bits/stdc++.h>
using namespace std;
int main(){
int piece,memb,part,sub;
vector<int>v;
vector<int>diff;
cin>>memb>>piece;
for(int i=0;i<piece;i++){
    cin>>part;
    v.push_back(part);
}

sort(v.begin(),v.end());
int least=v[memb-1]-v[0];
for(int i=1;i<=piece-memb;i++){
     if((v[i+memb-1]-v[i])<least){
        least=v[i+memb-1]-v[i];
     }
}
cout<<least<<endl;

return 0;
}
