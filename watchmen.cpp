#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,one,two;
cin>>n;
map<int,int>x;
map<int,int>y;
map<pair<int,int>,int>p;
long long int ans=0;
for(int i=1;i<=n;i++){

cin>>one>>two;
ans=ans+ x[one]++;
ans=ans+ y[two]++;
ans = ans- p[make_pair(one,two)]++;

}

cout<<ans<<endl;

return 0;
}
