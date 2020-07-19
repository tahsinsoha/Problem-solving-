#include<bits/stdc++.h>
using namespace std;
int josephus(int n,int k){
if(n==1) return 0;
else {
    return (josephus(n-1,k)+k)%n;
}
}
int main(){
int t,x,y;
cin>>t;
for(int i=1;i<=t;i++){
    cin>>x>>y;
    printf("Case %d: %d\n",i,josephus(x,y)+1);

}

return 0;
}
