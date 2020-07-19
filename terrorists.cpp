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

int main(){
 sieve();
int numb,l,h;
            cin>>numb;
        for(int i=1;i<=numb;i++){

                cin>>l>>h;
                int flag=0;
        for(int j=l;j<=h;j++){
                int div=0;
                 for(int k=1;k<=sqrt(l);k++){
                    if(i%j==0){
                            if(j==1||j==sqrt(l)) div++;
                            else div=div+2;
                    }
                 }
                // cout<<div;
        if(prime[div]==1){
                flag=1;
            printf("%d ",i);
        }
        //if(flag==0) printf("-1 ");
}

printf("\n");
}


return 0;
}
