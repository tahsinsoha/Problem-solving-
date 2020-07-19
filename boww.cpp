#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') sum++;
    }
    int sz = s.size();
    int minn =( sz/2) ;
    if(sum==0) cout<<0<<endl;
   else  if(sum==1 && ((sz%2)==1)) cout<<sz-minn-1<<endl;
   else  cout<< sz - minn <<endl;
return 0;
}
