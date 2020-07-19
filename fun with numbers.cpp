#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int t,n;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>s>>n;
for(int i=1;i<=n;i++){
    next_permutation(s.begin(),s.end());
}
cout<<s<<endl;
}

return 0;
}
