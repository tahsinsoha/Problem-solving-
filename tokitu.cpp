#include<bits/stdc++.h>
using namespace std;
int main(){
int n,numb;
cin>>n;
vector<int>v;
for(int i=0;i<=2;i++){
numb = (n+i)%4;
v.push_back(numb);
}
//for(int i=0;i<3;i++){
 //   cout<<v[i]<<endl;
//}


    for(int i=0;i<3;i++){
        if(v[i]==1){
            cout<<i<<" "<<"A"<<endl;
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(v[i]==3){
            cout<<i<<" "<<"B"<<endl;
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(v[i]==2){
            cout<<i<<" "<<"C"<<endl;
            return 0;
        }
    }

    for(int i=0;i<3;i++){
        if(v[i]==0){
            cout<<i<<" "<<"D"<<endl;
            return 0;
        }
    }

return 0;
}
