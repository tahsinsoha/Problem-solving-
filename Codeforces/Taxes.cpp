#include<bits/stdc++.h>
using namespace std;
bool prime(long long n){
for(long long i=2;i*i<=n;i++){
    if(n%i==0) return 0;


}
return 1;

}
int main(){
long long n;
cin>>n;
if(prime(n)){
    cout<<1<<endl;
}

else if(n%2==0 || (n%2==1 && prime(n-2))){
    cout<<2<<endl;
}
else {
    cout<<3<<endl;
}
return 0;
}
