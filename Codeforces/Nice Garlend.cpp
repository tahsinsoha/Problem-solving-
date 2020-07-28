#include<bits/stdc++.h>
using namespace std;
int main(){
int res=INT_MAX,n,cnt;
string s,fin;
string ben="BGR";
cin>>n>>s;
do{
        cnt=0;
   for(int i=0;i<s.size();i++){
    if(s[i]!= ben[i%3]) cnt++;
   }
    if(cnt<res){
        res=cnt;
        fin=ben;
    }

} while (next_permutation(ben.begin(),ben.end()));

cout<<res<<endl;
for(int i=0;i<n;i++)
cout<<fin[i%3];

return 0;
}
