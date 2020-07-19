#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n;
cin>>s;
vector<char>v;
int cont=0;
for(int i=0;i<s.size()-1;i+=2){
    if(i%2==0){
        if(s[i]=='a'&& s[i+1]=='b'){
               v.push_back('a');
               v.push_back('b');
        }
        else if(s[i]=='b'&& s[i+1]=='a'){
               v.push_back('b');
               v.push_back('a');
        }
       else  if(s[i]=='a'&& s[i+1]=='a'){
                cont++;
               v.push_back('a');
               v.push_back('b');
        }
      else   if(s[i]=='b'&& s[i+1]=='b'){
                cont++;
               v.push_back('b');
               v.push_back('a');
        }
    }
}
cout<<cont<<endl;
for(int i=0;i<v.size();i++) cout<<v[i];
cout<<endl;

return 0;
}
