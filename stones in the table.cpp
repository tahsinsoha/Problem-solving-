#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,ans=0;
    string s;
    cin>>n;
    cin>>s;
    for(i=0;i<(n-1);i++){
       if(s[i]==s[i+1]){
        ans++;
       }

    }
cout<<ans;


return 0;
}



