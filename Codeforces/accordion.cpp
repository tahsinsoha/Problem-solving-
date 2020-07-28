#include<bits/stdc++.h>
using namespace std;
int i,j,m,flag,contv,first,second;
int main(){
string s;
//int i,j,m,flag=0,contv=0,first,second;
cin>>s;
for(i=0;i<s.size();i++){
if(flag==0&&s[i]=='[') flag=1;
else if(flag==1&&s[i]==':') {flag=2;first=i;
    break;}
}
 //flag=0;
for( j=s.size()-1;j>first;j--) {
if(flag==2&&s[j]==']') flag=3;
else if(flag==3&&s[j]==':') {second=j;flag=4;break;}
}
//int contv=0;
for( m=first+1;m<second;m++){
    if(s[m]=='|') contv++;

}
//cout<<first<<second<<endl;
if(flag==4)cout<<contv+4<<endl;
else cout<<-1<<endl;
return 0;
}
