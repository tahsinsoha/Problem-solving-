#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k,inp,out;
vector<long long int>v;
set<long long int>s;
cin>>n>>k;

for(int i=0;i<n;i++){
    cin>>inp;
    v.push_back(inp);
}
sort(v.begin(),v.end());
for(int i=0;i<n;i++){
		int p = v[i];
		if(s.find(p/k)==s.end() || p%k!=0)
			s.insert(p);
	}

cout<<s.size()<<endl;

return 0;


}
