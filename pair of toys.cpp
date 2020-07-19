#include<bits/stdc++.h>
using namespace std;
int main(){

long long n,k;
cin>>n>>k;
if(n>=k) cout<<((k-1)/2)<<endl;
else {
        long long low = k-n;
long long high = (k-1)/2;

cout<<max(0ll,high-low+1)<<endl;

}

return 0;
}
