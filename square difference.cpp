#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,x,y;
int flag=0;

cin>>n;
for(int i=1;i<=n;i++){
    cin>>x>>y;
long long int sum=x+y;
flag=0;
if((x-y)==1){
        if((sum)%2==0){
            flag=1;
            break;
        }
 else {
for(int i=3;i<=sqrt(sum);i=i+2){

    if((sum)%i==0){
       flag=1;
       break;
    }
}


}
}
if(flag==1||(x-y)!=1){
    cout<<"No"<<endl;
}
else cout<<"Yes"<<endl;


}

return 0;
}

