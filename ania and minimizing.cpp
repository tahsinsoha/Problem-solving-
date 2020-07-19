#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,j,i;
string s;
cin>>n>>k;
cin>>s;
int cont=0;
if(k==0 ) cout<<s<<endl;
else if(s.size()==1 && k==1 ) cout<<0<<endl;
//else if(s.size()==1 && k==1 && s!="1") cout<<1<<endl;
else {
   if(s[0]=='1') {
    cout<<1;
   // cout<<"ami"<<endl;
   }
   if(s[0]!='1'){
    cout<<1;
   // cout<<"me"<<endl;
     cont++;
   }
 for( i=1;i<s.size();i++) {
        if(cont==k ){
             if(cont<s.size()) {

                    cout<<s[i];
             }
             //else {
              //  j=i-1;
            // break;
            // }
        }
   else if(s[i]=='0') cout<<0;
    else if(s[i]!='0') {
        cout<<0;
        cont++;
    }
 }
 //cout<<j<<endl;
 //for(int i=j;i<s.size();i++) cout<<s[i];
 //cout<<endl;
}



return 0;
}

