#include<bits/stdc++.h>
#define n 100005
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



for(int i=0;i<=n;i++){
        if(prime[i]){
            onlyprime[k++]=i;
    }
}
}
int main() {


    sieve();


    int N;


    while(scanf("%d", &N) && N){

        int c = 0;


        for(int i = 0; i < k; ++i){
            if( N % onlyprime[i] == 0){

                ++c;
            }
        }

        printf("%d : %d\n", N, c);

    }



return 0;
}
