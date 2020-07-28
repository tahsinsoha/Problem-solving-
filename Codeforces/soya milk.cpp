#include <bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
double dR(double d)
{
    return d * pi / 180.0;
}

int main()
{
    int l, w, h, th;
    double res;
    while (cin>>l>>w>>h>>th)
    {
        double hp = tan(dR(th)) * l;
        if (hp <= h)
        {
            res = l * (h - hp / 2.0) * w;
        }
        else
        {
            th = 90 - th;
            res = (h * tan(dR(th)) * h / 2.0) * w;
        }

        printf("%.3lf mL\n", res);
    }
    return 0;
}
