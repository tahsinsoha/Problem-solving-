#include<bits/stdc++.h>
using namespace std;
long long arr[2000007];
long long cs[2000007];
long long ps[2000007];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double sg=0,sa=0,sb=0,sum=0;;
        for(int i=1; i<=n; i++)
        {
            double g,a,b;

            cin>>g>>a>>b;

            sa+= (g*(b/(a+b)));
            sb+= (g*(a/(a+b)));


        }


        cout << std::fixed << std::setprecision(10) << sa << " ";
        cout << std::fixed << std::setprecision(10) << sb <<endl;



    }


    return 0;

}










