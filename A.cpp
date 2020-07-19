#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n;
cin>>n;
long long int ans,fin;

fin = n*(n+1);
ans = fin/2;
ans = ans - (n-1);
cout<<ans<<endl;

return 0;
}
