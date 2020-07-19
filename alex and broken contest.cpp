#include<bits/stdc++.h>
using namespace std;
int main(){

string s,sub;
int i,sum=0;
cin>>s;
int len=s.size();
for(i=0;i<len-2;i++){
    sub=s.substr(i,3);
    if(sub=="Ann"){
        sum++;
    }
}
for(i=0;i<len-3;i++){
    sub=s.substr(i,4);
    if(sub=="Olya"){
        sum++;
    }
}
for(i=0;i<len-4;i++){
    sub=s.substr(i,5);
    if(sub=="Danil"||sub=="Slava"){
        sum++;
    }
}
for(i=0;i<len-5;i++){
    sub=s.substr(i,6);
    if(sub=="Nikita"){
        sum++;
    }
}
if(sum==1)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
