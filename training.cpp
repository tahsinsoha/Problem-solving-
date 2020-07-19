
#include <bits/stdc++.h>

using namespace std;

int n, m, myans;

int main() {

    scanf("%d%d", &n, &m);

    for (int i = 0; i <= n; i++) {
        int soh = i;// 2 jon exp ar 1 jon newbiie diye team
        int myn = n - i;// baki exp
        int mym = m - 2 * i;//baki newbie

        if (mym >= 0) {
            soh += min(mym, myn / 2);// 2 jon newbie ar ekjon exp diye tea,
            myans = max(myans, soh);// dui type er moddhe konta diye beshi team banano jai
        }
    }

    printf("%d\n", myans);

    return 0;
}
