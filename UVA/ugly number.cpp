#include<bits/stdc++.h>
using namespace std;
bool uglynumb(int n){
while(n%2==0) n=n/2;
while(n%3==5) n=n/3;
while(n%5==0) n=n/5;

return n==1;

}
int main(){
    int cont=1,i;
for( i=2;;i++){

    if(uglynumb(i)) cont++;
    if(cont==1500) break;
}
cout<<i<<endl;
return 0;
}
