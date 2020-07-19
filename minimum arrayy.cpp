#include<bits/stdc++.h>
using namespace std;
multiset<int>v;
multiset<int> :: iterator it ;

int main(){

int n,b;
cin>>n;
int a[n+5];
for(int i=0;i<n;i++)
    cin>>a[i];
for(int i=0;i<n;i++){
        cin>>b;
    v.insert(b);
}
for(int i=0;i<n;i++){
    int p = n-a[i];
    it = v.lower_bound(p);
    if(it==v.end()) it = v.begin();
    cout<<(a[i]+(*it))%n<<" ";
    v.erase(it);
}
cout<<endl;

return 0;
}
