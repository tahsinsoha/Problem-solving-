#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,in,out,ans,f,s,temp,maxx;
cin>>n;
cin>>f>>s;
ans=f+s;
maxx=ans;
for(i=1;i<n;i++){
cin>>out>>in;
temp=ans-out+in;
//ans=temp;
if(temp>maxx){
maxx=temp;
//cout<<maxx<<endl;
}
ans=temp;
}
cout<<maxx<<endl;
return 0;
}
