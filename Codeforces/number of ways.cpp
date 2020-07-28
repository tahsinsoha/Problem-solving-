#include<bits/stdc++.h>
using namespace std;
int main(){

int n,bsum=0,rsum=0;
string s;
cin>>n>>s;
for(int i=0;i<n-1;i++){
if(s[i]==s[i+1] && s[i]=='b'){
    bsum=bsum+1;
}
else if(s[i]==s[i+1] && s[i]=='r'){
    rsum=rsum+1;
}


}
if(rsum==0)cout<<bsum/2;
else if(bsum==0) cout<<rsum/2;
else cout<<(max(bsum,rsum)/2)+min(bsum,rsum);

return 0;
}
