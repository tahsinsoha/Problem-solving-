#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
double d,a1,a2,a,asq,b,check;
cin>>t;
for(int i=1;i<=t;i++){

    cin>>d;
    if(d==0){cout<<"Y 0.000000000 0.000000000"<<endl;
    continue;
    }
check= (pow(d,2))-4*d;
if(check>=0){
asq=(double)sqrt((pow(d,2))-4*d);
a1=(double)(d+asq)/2;
a2=(double)(d-asq)/2;
//cout<<a1<<" "<<a2<<" "<<asq;
if(a1>=0&&a2>=0){
a=a1;
b=(double)(d/a);
 cout << std::fixed;
       cout <<"Y " << setprecision(9)<<a << " ";
       cout << std::fixed;
       cout << setprecision(9) <<b << endl;

}
else if(a1>=0){
    a=a1;
b=(double)(d/a);
//cout<<"Y "<<a<<" "<<b<<endl;
 cout << std::fixed;
       cout <<"Y " << setprecision(9)<<a << " ";
       cout << std::fixed;
       cout << setprecision(9) <<b << endl;
}
else if(a2>=0){
         a=a2;
b=(double)(d/a);
//cout<<"Y "<<a<<" "<<b<<endl;

 cout << std::fixed;
       cout <<"Y " << setprecision(9)<<a << " ";
       cout << std::fixed;
       cout << setprecision(9) <<b << endl;
}
//else cout<<"N"<<endl;

}
else {
    cout<<"N"<<endl;
}

}



return 0;
}
