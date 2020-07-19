#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b;
long long ans = 1;
cin>>a>>b;
if(b-a>=10) {
    cout<<0<<endl;
    return 0;
}

else {

    for(long long i=a+1;i<=b;i++){
        ans = (((ans)%10)*(i%10))%10;
    }

}
cout<<ans<<endl;

return 0;
}


