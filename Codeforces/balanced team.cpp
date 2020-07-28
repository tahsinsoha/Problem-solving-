#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,x;
cin>>n;
vector<long long int>v;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
int maxx=0;
for(int i=0;i<n-1;i++){
        int cont=0;

    for(int j=i+1;j<n;j++){
        if((v[i]-v[j])<=5) cont++;
          else break;
    }

  maxx=max(maxx,cont);
 // cout<<maxx<<" ";
}
cout<<maxx+1<<endl;
return 0;
}
