#include<bits/stdc++.h>
using namespace std;
int main(){

int dig,div;
cin>>dig>>div;
if(dig==1&& div>=10) {
    cout<<-1<<endl;
    return 0;
}
else if(dig!=1 && div>=10){
    cout<<1;
    for(int i=0;i<dig-1;i++) cout<<0;


}
else {for(int i=0;i<dig;i++) cout<<div;}



return 0;
}

