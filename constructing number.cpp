#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,sum,total;
string numb;
cin>>t;
for(int i=1;i<=t;i++){
cin>>n;
sum=0;
total=0;
for(int j=1;j<=n;j++){
      cin>>numb;
for(int k=0;k<numb.size();k++){
sum=sum+(numb[k]-'0');
}
total=total+sum;
sum=0;
}

if(total%3==0) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}

return 0;
}
