#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x1,y1,maxx=0;
cin>>n;
for(int i=1;i<=n;i++){
cin>>x1>>y1;
int sum=x1+y1;
 maxx=max(maxx,sum);



}
cout<<maxx<<endl;

return 0;
}
