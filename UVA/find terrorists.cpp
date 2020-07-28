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

        int t,l,h,div;
        sieve();
        cin>>t;
        for(int i=1;i<=t;i++){
                cin>>l>>h;
                int flag=0;
                int m=0;
                for(int j=l;j<=h;j++){
                        int div=0;
                        //int flag=0;
                    for(int k=1;k<=j;k++){
                            if(j%k==0) div++;

                    }
                    if(prime[div]) {
                            m++;
                        flag=1;
                       // cout<<div<<" ";
                       if(m==1) cout<<j;
                        else cout<<" "<<j;
                    }


                        }
                        if(flag==0) cout<<-1<<endl;
                          else  cout<<endl;
                        // if(i!=1) cout<<endl;

        }

//cout<<endl;

return 0;
}
