#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
int n;
cin>>n;
while(s.find(n)==s.end()){
 s.insert(n);
 n++;
 while (n%10==0) n=n/10;
}
cout<<s.size()<<endl;
return 0;
}
