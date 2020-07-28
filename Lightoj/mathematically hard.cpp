#include<bits/stdc++.h>
#define ull unsigned long long
#define mx 5000000
using namespace std;
//bool arr[mx];
int phi[mx+5];
ull sum[mx+5];
void phii(){
for(int i=2;i<=mx;i++)
    phi[i]=i;

    for(int i=2;i<=mx;i++)
    {
        if(phi[i]==i){
            for(ull j=i;j<=mx;j=j+i)
                phi[j]-=phi[j]/i;
        }

    }
}
void calcsum(){
sum[1]=0;
for(int i=2;i<=mx;i++){
    sum[i]=phi[i];
    sum[i]*=phi[i];
    sum[i]+=sum[i-1];
}

}

int main(){
int t,tc;
int a,b,res;
phii();
calcsum();
scanf("%d",&t);
for(tc=1;tc<=t;tc++){
    scanf("%d%d",&a,&b);
    printf("Case %d: %llu\n",tc,sum[b]-sum[a-1]);
    //printf("Case 1: 4")

}



return 0;
}

