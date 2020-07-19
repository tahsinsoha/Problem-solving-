#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>mapp;
int n,m,d,i,tym,j;
string s,s1;
cin>>n;
for(i=1;i<=n;i++){
        cin>>m;
for(j=1;j<=m;j++){
  cin>>s;
  cin>>tym;
mapp[s]=tym;
}
cin>>d;
cin>>s1;
int flag=0;
map<string,int> ::iterator it;
for(it=mapp.begin();it!=mapp.end();it++){
    if(s1==it->first){
      if((it->second)<=d){
        cout<< "Case"<<" "<< i<<":"<< " Yesss"<<endl;
        flag=1;
     break;
      }
      else if((it->second>d)&&(it->second<=(d+5))){
         cout<< "Case"<<" "<< i<<":"<<" Late" <<endl;
         flag=1;
      break;
      }

    }

}
 if(flag==1){
        mapp.clear();
        continue;}
          else {
           cout<< "Case"<<" "<< i<<":"<<" "<<"Do your own homework!"<<endl;
 mapp.clear();
continue;
}
}


return 0;
}
