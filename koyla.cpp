#include<bits/stdc++.h>
using namespace std;
int main(){
int d1,d2;
cin>>d1>>d2;


if (d1==d2) cout<<d1*100<<" "<<d1*100+1<<endl;
else if((d1+1)==d2) cout<<d1*100+99<<" "<<d2*100<<endl;
else if(d1==9 && d2==1) cout<<9*10+9<<" "<<1*100<<endl;
else  cout<<-1<<endl;
return 0;
}
