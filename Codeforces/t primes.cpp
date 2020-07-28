#include<bits/stdc++.h>
#define n 1000000
int prime[n];
int onlyprime[n];
int k=0;
using namespace std;
void sieve(){
    int i=2;
        for(i=2;i<=n;i++){
            prime[i]=1;
        }
        int len=sqrt(n);
                 prime[0]=prime[1]=0;
          for(int i = 2; i <= len; i++){
        if(prime[i]){
            for( int k = i*i; k <= n; k += i )
                prime[k] = 0;
        }
          }

}
//cout<<prime[0]<<endl;
int main(){
    sieve();
long long int numb,input;
cin>>numb;
//cout<<prime[0];
for(int k=1;k<=numb;k++){
    cin>>input;
    long long int ans= sqrt(input);
    //cout<<ans;
    //cout<<prime[ans];
    if((prime[ans]==1)&&( ans*ans==input)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




}
return 0;
}

