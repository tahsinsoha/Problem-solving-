#include <bits/stdc++.h>

using namespace std;

set < int > p;

void factor(int a) {
        for(int i = 2 ; i*i <= a ; i++) {
                if(a%i == 0) {
                        p.insert(i);

                        while(a%i == 0) {
                                a /= i;
                        }
                }
        }

        if(a != 1) p.insert(a);
}
int main() {
        int n, a1,b1,a3,b3;
        cin >> n >> a1 >> b1;
        factor(a1);
        factor(b1);
        int arr[n + 5], brr[n + 5];
        for(int i = 2 ; i <= n ; i++) {
                cin >> arr[i] >> brr[i];
        }

        for(auto s : p) {
                if(n == 1) {
                        cout << s << endl;
                        return 0;
                }
                int flag = 0;
                for(int i = 2 ; i <= n ; i++) {
                        if(arr[i]%s != 0 and brr[i]%s != 0) {
                                flag = 1;
                                break;
                        }
                }

                if(flag == 0) {
                        cout  << s << endl;
                        return 0;
                }
        }

        cout << -1 << endl;
        return 0;
}
