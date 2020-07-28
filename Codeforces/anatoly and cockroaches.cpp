#include<bits/stdc++.h>
using namespace std;
int main(){

int n,rosum=0,resum=0,bosum=0,besum=0;
string s;
cin>>n>>s;
for(int i=0;i<s.size();i++){
    if(i%2==0){
        if(s[i]=='r') resum ++;
        else besum++;
    }
    else {

if(s[i]=='r') rosum ++;
        else bosum++;

    }
}

cout<<min(max(rosum,besum),max(bosum,resum));

return 0;
}
