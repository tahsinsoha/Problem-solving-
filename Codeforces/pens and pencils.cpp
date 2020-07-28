#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,c,d,k;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>a>>b>>c>>d>>k;
    int pn = (a+c-1)/c;
    int pc = (b+d-1)/d;
    if(pn+pc>k) cout<<-1<<endl;
    else cout<<pn<<" "<<pc<<endl;
}

return 0;
}
