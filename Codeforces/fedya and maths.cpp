#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
if(s.size()==1) {
    if(int(s[0])%4==0){
     cout<<4<<endl;
     return 0;

    }
    else {
        cout<<0<<endl;
        return 0;
    }

}
else {
    int one = int(s[s.size()-2]) ;
    one = one*10;
    int two = int(s[s.size()-1]);
int numb = one +two;
if(numb%4==0) cout<<4<<endl;
else cout<<0<<endl;

}
return 0;
}
