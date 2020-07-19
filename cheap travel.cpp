#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,a,b;
cin>>n>>m>>a>>b;

double d = b/m;
if(a<d || a==d) cout<<a*n<<endl;

else {
int div = n/m;
int rem = n%m;

if(rem*a < b ) cout<< div*b+rem*a<<endl;
else cout<<div*b+b<<endl;

}



return 0;
}
