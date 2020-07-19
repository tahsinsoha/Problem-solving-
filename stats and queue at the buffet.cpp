#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long> >v;
bool comp( pair<long long,long long>A,  pair<long long,long long >B)
{
    return A.first-A.second > B.first-B.second;
}
int main(){
int n;
long long a,b;
cin>>n;
for(int i=1;i<=n;i++){
cin>>a>>b;
v.push_back(make_pair(a,b));

}

sort(v.begin(),v.end(),comp);
//cout<<v[0].first<<" "<<v[0].second<<endl;
//cout<<v[1].first<<" "<<v[1].second<<endl;
//cout<<v[2].first<<" "<<v[2].second<<endl;
long long sum1=0,sum2=0;
for(int i=0;i<v.size();i++){
sum1 = sum1+v[i].first*i+v[i].second*(n-i-1);
}

cout<<sum1<<endl;
return 0;
}
