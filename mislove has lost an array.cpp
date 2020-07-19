#include<bits/stdc++.h>
using namespace std;
int main(){
int n,l,r;
cin>>n>>l>>r;
int sum=0;
int ans =1;
for(int i=1;i<=l;i++){
sum = sum + ans;
ans = ans *2;
}
cout<<sum+ (n-l)<<" ";
int sum2 = 0;
int ans2 =1;
int maxx;
for (int i=1;i<=r;i++){
sum2 = sum2 +ans2;
maxx = ans2;
ans2 =  ans2*2;

}
cout<< sum2+ (n-r)*maxx<<endl;
return 0;
}
