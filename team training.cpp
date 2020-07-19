#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,myans;
cin>>n>>m;

    for (int i = 0; i <= n; i++) {
        int cur = i;
        int myn = n - i;
        int mym = m - 2 * i;

        if (mym >= 0) {
            cur += min(mym, myn / 2);
            myans = max(myans, cur);
        }
    }

    printf("%d\n", myans);

    return 0;
}
