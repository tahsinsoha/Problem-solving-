#include<bits/stdc++.h>
using namespace std;
int main(){
int x1,y1,x2,y2,a;
cin>>x1>>y1>>x2>>y2;
if(x1==x2){
a=abs(y1-y2);
cout<<x1+a<<" "<<y1<<" "<<x2+a<<" "<<y2<<endl;
return 0;
}
else if(y1==y2){
    a=abs(x1-x2);
    cout<<x1<<" "<<y1+a<<" "<<x2<<" "<<y2+a<<endl;
    return 0;
}

else if(abs(x2-x1)==abs(y2-y1)){
        a=abs(x1-x2);
    cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
    return 0;
}
else cout<<-1<<endl;
return 0;
}
