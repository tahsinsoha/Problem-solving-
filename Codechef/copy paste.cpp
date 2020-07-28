#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,a;
set<int>s;
cin>>t;
while(t--){
cin>>n;
while(n--){
    cin>>a;
    s.insert(a);
}
cout<<s.size()<<endl;
s.clear();
}
return 0;
}
