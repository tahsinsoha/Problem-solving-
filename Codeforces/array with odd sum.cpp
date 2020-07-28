#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n,a;
int sum=0;
bool odd=0,even=0;
while(t--){
  cin>>n;
sum=0,odd=0,even=0;
while(n--){
cin>>a;
if(a%2) odd++;
else even++;
sum+=a;

}
if(sum%2 || (odd==1 && even==1)) cout<<"YES"<<endl;

else cout<<"NO"<<endl;
}

return 0;
}

