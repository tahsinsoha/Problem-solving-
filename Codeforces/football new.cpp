#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum1=1,sum2=0;
string s,s1;
vector<string>v;
cin>>n;
cin>>s;
v.push_back(s);
for(int i=1;i<n;i++){
cin>>s1;
if(s==s1) sum1++;
else {v.push_back(s1);
sum2++;}

}

//cout<<sum1<<sum2;
if(sum1>sum2) cout<<v[0];
else cout<<v[1];



return 0;
}
