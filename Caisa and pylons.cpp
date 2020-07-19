#include<bits/stdc++.h>
using namespace std;
int main(){
int n,maxx=0,num;
cin>>n;
for(int i=0;i<n;i++){
cin>>num;
maxx=max(maxx,num);
}
cout<<maxx<<endl;



return 0;
}
