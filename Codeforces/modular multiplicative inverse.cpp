#include <stdio.h>

int x, y, z;

int gcdFunc(int a, int b) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int gcd = gcdFunc(b, a % b);
    z = x;
    x = y;
    y = z - a / b * y;
    return gcd;
}

int main() {
    int t, m, a;

    scanf("%d", &t);

    while(t--) {
        //The Inputs should be co-prime with each other
        scanf("%d %d", &a, &m);
        gcdFunc(a, m);
        printf("%d\n", x >= 0 ? x : x + m);
    }

    return 0;
}
