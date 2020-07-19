#include<bits/stdc++.h>
using namespace std;
int main(){
int flag=0;
string s;
cin>>s;
if(s.size()==1){
    if(isupper(s[0])==1) cout<<(char)tolower(s[0]);
    else cout<<(char)toupper(s[0]);
    return 0;
}
    if(s[0]>='A'&&s[0]<='Z'){
        //cout<<toupper[s[0]];
        for(int i=1 ; i<s.size();i++){
                 if(s[i]>='A'&&s[i]<='Z') flag=1;

                   else {
                    flag=0;
                    break;
                   }
        }
    }
    if(s[0]>='a'&&s[0]<='z'){
 for(int i=1 ; i<s.size();i++){
                 if(s[i]>='A'&&s[i]<='Z') flag=1;

                   else {
                    flag=0;
                    break;
                   }
        }
}
//cout<<flag;
if(flag==0) cout<<s<<endl;
else {
    for(int i=0;i< s.size();i++){
        if(isupper(s[i])) cout<<(char)tolower(s[i]);
        else cout<<(char)toupper(s[i]);

    }


}
return 0;
}
