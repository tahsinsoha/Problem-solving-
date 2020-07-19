#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int cnt =n;
for(int i=1;i<=n;i++){
    if(i%m==0){
        cnt++;
        n++;

    }

}
cout<<cnt<<endl;
return 0;
}





