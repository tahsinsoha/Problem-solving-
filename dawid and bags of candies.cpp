#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
int sum = a+b+c+d;
if((a+c)==(b+d)) cout<<"YES"<<endl;
else if ((a+d)==(b+c)) cout<<"YES"<<endl;
else if ((a+b)==(c+d)) cout<<"YES"<<endl;
else if((a+b+c)==d) cout<<"YES"<<endl;
else if((a+c+d)==b) cout<<"YES"<<endl;
else if((b+c+d)==a) cout<<"YES"<<endl;
else if((a+b+d)==c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


return 0;
}
