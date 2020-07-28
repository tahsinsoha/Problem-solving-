#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,p,q,sum=0;
cin>>n;
for(i=0;i<n;i++){
 cin>>p>>q;
 if((q-p)>=2) sum++;
}
cout<<sum<<endl;
return 0;
}
