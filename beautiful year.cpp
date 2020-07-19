#include<bits/stdc++.h>
using namespace std;
int main(){
int i,year,j,flag=0;
string st;
set<char>s;
cin>>year;
for(i=year+1;;i++){
        set<char>s;
stringstream ss;
ss<<i;
ss>>st;
for(j=0;j<st.size();j++){
s.insert(st[j]);

}

if((s.size())==(st.size())){
flag=1;
        cout<<i;
        break;
}
else continue;
}

return 0;
}
