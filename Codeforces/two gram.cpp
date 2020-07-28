#include<bits/stdc++.h>
using namespace std;
int main(){
map<pair<char,char>,int>twograms;
string s,sub;

char c1,c2;
int i,n;
int soh=0;
cin>>n;
cin>>s;
for(i=0;i<s.size()-1;i++){
    sub=s.substr(i,2);
twograms[make_pair(sub[0], sub[1])]++;}

map<pair<char,char>,int>::iterator it;
for(it = twograms.begin(); it != twograms.end(); it++){

    if (it ->second > soh)
    {
        c1= it->first.first;
        c2=it->first.second;
        soh = it->second;
    }
}
cout<<c1<<c2<<endl;
return 0;
}
