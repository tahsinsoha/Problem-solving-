#include<bits/stdc++.h>
using namespace std;
int main(){
long double r1,r2,w1,w2;
cin>>r1>>r2;
cin>>w1>>w2;

r1 = abs(r1);
r2 =abs(r2);
w1 = abs(w1);
w2 = abs(w2);

long double R,W,ans1,ans2;

R= pow(r1,2)+pow(r2,2);
ans1= sqrt(R);

W= pow(w1,2)+pow(w2,2);
ans2= sqrt(W);
// cout<<R<<" "<<W<<endl;
// cout<<ans1<<" "<<ans2<<endl;
if(R>W) cout<<"Wil"<<endl;
else if(W>R) cout<<"Russo"<<endl;
else cout<<"Empate"<<endl;

 return 0;
}
