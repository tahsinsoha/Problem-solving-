#include<bits/stdc++.h>
using namespace std;
int main(){
int t,m,n,b,c,k,j,ingr,x,val,p;
string s;
string recipe,ingr2;
map<string,int>mapp;
map<string,int>rec;
cin>>t;
for(i=1;i<=t;i++){

scanf(" [^\n]",s);
  for(p=0;p<strlen(s);p++){
        cout<<toupper(s[p]);
    }


    cin>>m>>n>>b;
    for(j=0;j<m;j++){

scanf(" [^\n]",ingr);
        cin>>val;
        mapp[ingr]=val;
    }
    for(i=0;i<n;i++){

scanf(" [^\n]",ingr2);
      cin>>k;
      for(j=0;j<k;j++){
           cin>>ingr2;
           cin>>x;
           rec[ingr2]=x;
      }

    }



}

return 0;
}

