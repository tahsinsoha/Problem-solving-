#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,2,2,2,2,2,3,3,3,5,5,5};
    int n = sizeof(a)/sizeof(int);
    cout<<lower_Bound(a,n,2)<<endl;
    cout<<upper_Bound(a,n,2)<<endl;


return 0;
}






