#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int cont=0;
map<pair<int,int>, int> mp;
int a[n],b[n];
for(int i=0;i<n;i++) cin>> a[i];
for(int i=0;i<n;i++) cin>> b[i];
for(int i=0;i<n;i++) {
  int g = __gcd(a[i],b[i]);
  if(a[i]==0) {
 //mp[make_pair(a[i], b[i])] ++;
 if(b[i]==0) {
          cont++;
  }
  }

 else  mp[make_pair(a[i]/g, b[i]/g)] ++;
}
int highest = 0;
map<pair<int,int>, int> :: iterator it;
for(it= mp.begin(); it!= mp.end();it++){
  if(it->second>highest) highest= it->second;
}
cout<<highest+cont<<endl;
//cout<< __gcd(1,0)<<" "<<__gcd(2,0)<<" "<<(0/1)<<endl;
return 0;
}
