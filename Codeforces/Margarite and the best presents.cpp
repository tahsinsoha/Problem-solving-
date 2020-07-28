#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,l,r,ans1,ans2;
cin>>n;
for(int i=1;i<=n;i++){
   cin>>l>>r;
   if((l-1)%2==0) ans1= (l-1)/2;
   else ans1= -(l)/2;
   if(r%2==0) ans2=r/2;
   else ans2=-(r+1)/2;
   cout<<ans2-ans1<<endl;


}

return 0;
}

