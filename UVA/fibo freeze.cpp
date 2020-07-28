#include<bits/stdc++.h>
#define mx 1200
#define lim 5007
using namespace std;
int fib[lim][mx];
void precal(){
fib[0][0]=0;
fib[1][0]=1;
for(int i=2;i<lim;i++){
    for(int j=0;j<mx;j++){
        fib[i][j]+=fib[i-1][j]+fib[i-2][j];
        if(fib[i][j]>9){
            fib[i][j+1]+=(fib[i][j]/10);
            fib[i][j]%=10;
        }
    }
}

}

int main(){
precal();
int n;
while(cin>>n){
int i;
for(i=mx-1;i>0;i--)
    if(fib[n][i]!=0) break;
    printf("The Fibonacci number for %d is ",n);
for(;i>=0;i--)
    printf("%d",fib[n][i]);
cout<<endl;
}
return 0;
}
