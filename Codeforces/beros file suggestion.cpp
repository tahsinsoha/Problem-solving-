#include<bits/stdc++.h>
using namespace std;
int main(){

map<string,int>mpp;
map<string,int>mob;
//vector<string>v;
int n,i,j,k,q;
string s[10010];
cin>>n;
for(i=1;i<=n;i++ ){
cin>>s[i];

for(j=0;j<s[i].size();j++){
            string ss="";
            for(k=j;k<s[i].size();k++){

                ss=ss+s[i][k];
                if(mpp[ss]!=i){
                    mpp[ss]++;
                    //mob[ss]=i;
                }
            }


}


}


cin>>q;
string s2;

for(int i=0;i<q;i++){

    cin>>s2;
    if(mpp.find(s2)==mpp.end()) cout<<"0"<<" "<<"-"<<endl;
    else cout<<mpp[s2]<<" "<<s[mpp[s2]]<<endl;
}



return 0;
}
