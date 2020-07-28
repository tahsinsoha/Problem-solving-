#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
int cont=0;
cin>>n;
 set<int>s;
for(int i=0;i<n;i++){
    cin>>x;
    while(s.find(x)!= s.end()){
        x=x+1;
         cont++;

    }
    s.insert(x);
}
cout<<cont<<endl;
return 0;
}
