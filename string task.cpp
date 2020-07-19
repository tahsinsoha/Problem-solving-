#include<bits/stdc++.h>
using namespace std;
int main(){
char s[100];
int i,len;
char c;
cin>>s;
len=strlen(s);
for(i=0;i<len;i++){
if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='U'||s[i]=='I'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='y'){
    continue;
}
else if(s[i]>='a'&&s[i]<='z'){
cout<<"."<<s[i];
}
else {
    s[i]=s[i]+32;;
        cout<<"."<<s[i];

}


}


return 0;
}
