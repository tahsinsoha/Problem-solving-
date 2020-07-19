#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main(){
    int t;
    cin>>t;
    ull n,d,sum,temp,j;
    for(int i=1;i<=t;i++){
        cin>>n>>d;
            sum=d;
            temp=1;
            j=0;
         //   cout<<sum<<endl;
               //temp=10;
               while(sum%n !=0){
                       sum=(sum*10+d)%n;
                       //cout<<sum<<endl;
                       temp++;
               }

       printf("Case %d: %d\n", i, temp);
    }


return 0;
}
