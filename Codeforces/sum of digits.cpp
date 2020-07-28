#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;
int i,ans=0,cont=0;
if(s.size()==1){cout<<"0"<<endl;
return 0;}

for(i=0;i<s.size();i++){
    ans=ans+s[i]-'0';
    if(i==s.size()-1){
           cont++;
       stringstream ss;
       ss<<ans;
       ss>>s;
        if(s.size()==1){
            cout<<cont;
            return 0;
        }
        else {
                //cont++;

            ans=0;
            i=-1;
        }

    }

}
return 0;
}
