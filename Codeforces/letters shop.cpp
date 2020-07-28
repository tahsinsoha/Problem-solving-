#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
//int arr[n+5];
map<char,vector<int>>mpp;
string s,s1;
cin>>s;
int q;
cin>>q;
for(int i=0;i<n;i++){
            mpp[s[i]].push_back(i);}

while(q--){
       // memset(arr,0,sizeof(arr));
       map<char,int>mpppp;
       cin>>s1;
       for(int i=0;i<s1.size();i++){
            mpppp[s1[i]]++;

}
int ans =0;
 map<char,int> :: iterator it;
for(it=mpppp.begin();it!=mpppp.end();it++){
char a  = it->first;
int b = it->second;

ans = max(ans,mpp[a][b-1]);

}
cout<<ans+1<<endl;
}

return 0;
}
