#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    double pi = 2*acos(0);
  cin>>t;
    while(t--) {
        double d, l, a, b, c;
       cin>>d>>l;
        d /= 2, l /= 2;
        c = d, a = l;
        b = sqrt(a*a-c*c);
        printf("%.3lf\n", pi*a*b);
    }
    return 0;
}
