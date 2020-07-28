#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main(){

    double m,res;
    double c=sin(72*pi/180)/sin(63*pi/180);

    while(cin>>m){
        res=c*m;

        printf("%.10f\n",res);
    }
}
