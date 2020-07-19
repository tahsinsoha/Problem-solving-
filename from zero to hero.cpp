#include<bits/stdc++.h>
using namespace std;
int main(){
int tc;
cin>>tc;
long long n,k;
while(tc--){
cin>>n>>k;
long long res=0;

while(n>0){
     if(n%k==0){
        res++;
        n=n/k;
     }
     else {
        res=res+n%k;
        n=n-n%k;
     }

}
cout<<res<<endl;
}

return 0;
}
