#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int ind =-7;
for(int i=0;i<s.size();i++){
        //ind =i;
    if(int(s[i])%2==0){
            ind=i;
        if(s[s.size()-1]>s[i]){
        swap(s[s.size()-1],s[i]);
cout<<s<<endl;
return 0;
        }
    }
}
if(ind==-7){
cout<<-1<<endl;
return 0;
}
else {
    swap(s[s.size()-1],s[ind]);
    cout<<s<<endl;
    return 0;
}
return 0;
}
