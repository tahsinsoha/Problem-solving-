#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
long long ans,temp;
while(getline(cin,s)){
   if(s=="0") return 0;
    ans =0;
    temp=2;
    for(int i=s.size()-1;i>=0;i--){
        ans=ans+(s[i]-'0') *(temp-1);
        temp*=2;
    }
    cout<<ans<<endl;

}

return 0;
}
