#include<bits/stdc++.h>
using namespace std;
char c[] = {'a','e','i','o','u'};
int main(){
int k;
cin>>k;
for(int i=5;i<=k;i++){
    if(k%i==0){
        if((k/i)>=5){
            int n = i;
            int m = k/i;
            for(int ii=0;ii<n;ii++ ){
                for(int jj=0;jj<m;jj++){
                    cout<<c[(ii+jj)%5];
                }
            }
            return 0;
        }
    }
}
cout<<-1<<endl;
return 0;
}
