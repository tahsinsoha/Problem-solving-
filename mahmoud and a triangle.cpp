#include<bits/stdc++.h>
using namespace std;
int main(){

vector<int>v;
int inp,n,j;
cin>>n;
for(int i=0;i<n;i++){

cin>>inp;
v.push_back(inp);
}
sort(v.begin(),v.end());
int len=v.size();

for( j=v.size()-1;j-2>=0;j--){
if(v[j]<(v[j-1]+v[j-2])){
        //cout<< (v[j-1]+v[j-2])<<" "<<v[j]<<" "<<endl;
    cout<<"YES"<<endl;
    return 0;
}

}
 cout<<"NO"<<endl;
return 0;
}
