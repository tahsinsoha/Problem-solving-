#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int n,given,annn;
while(cin>>given && given ){
n = (given*10)/9;
annn = (n-1) - (n-1)/10;
if(annn==given){
    cout<<n-1<<" "<<n<<endl;
}
else {
    cout<<n<<endl;
}
}

return 0;
}
