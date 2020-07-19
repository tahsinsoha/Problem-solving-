#include<bits/stdc++.h>
using namespace std;
long long int phi(long long int x){
long long result = x;
for(int p=2;p*p<=x;p++){
    if(x%p==0) {
      while(x%p==0)  x=x/p;
        result = result- result/p;
    }

}
if(x>1) result= result-(result/x);
return result;
}
int main(){
long long int n;
while(cin>>n && n){
    cout<<phi(n)<<endl;
}
return 0;
}
