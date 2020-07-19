#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>mpp;
int n;
string s;
cin>>n;
while(n--){
    cin>>s;
    if(mpp[s]==0){
        cout<<"OK"<<endl;
        mpp[s]++;
    }
    else {
      //  mpp[s]++;
        cout<<s<<mpp[s]<<endl;
        mpp[s]++;
    }
}
return 0;
}
