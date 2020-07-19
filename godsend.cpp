#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cnt=0;
long long a,sum=0;
cin>>n;
for(int i=1;i<=n;i++){
     cin>>a;
if(a%2==0) cnt++;
sum+=a;

}
if(sum%2==0 && cnt==n)
    cout<<"Second"<<endl;
else cout<<"First"<<endl;

return 0;
}
