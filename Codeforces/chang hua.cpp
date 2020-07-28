#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y,z;
cin>>x>>y>>z;
if(((x/z) + (y/z)) == (x+y)/z) {
    cout<<(x+y)/z<<" "<<0<<endl;
    return 0;
}
cout<<(x+y)/z<<" ";
cout<< min(z-x%z,z-y%z)<<endl;




return 0;
}
