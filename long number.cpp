#include<bits/stdc++.h>
using namespace std;
int f[10];
int main(){
 int n;
 string s;
cin>>n>>s;
 //int f[10];
 for(int i=1;i<=9;i++) cin>>f[i];
 for(int i=0;i<n;i++){
    if((s[i]-'0')<f[s[i]-'0']){

    while(i<n &&f[s[i]-'0'] >=(s[i]-'0') ){
        s[i]=char(f[s[i]-'0']+'0');
      //  cout<<s[i]<<" ";
        i++;
    }
    break;
    }

 }
 cout<<s<<endl;
return 0;
}
