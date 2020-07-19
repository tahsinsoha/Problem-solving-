#include<bits/stdc++.h>
using namespace std;
bool a[10000002];

int main()
{
    vector<int>isprime;
    int t,x,y,n,cont;
    a[0]=false;
    a[1]=false;
    for(int i=2; i<=10000000; i++)
    {

        if(a[i]==false)
        {
            isprime.push_back(i);

        for(int j=2*i; j<=10000000; j=j+i)
        {
            a[j]=true;

        }
    }
    }
    cin>>t;
//scanf("%d", &t);

	for (int cs = 1; cs <= t; cs++) {
		scanf("%d", &n);
		cont = 0;

		for (int i = 0;; i++) {
			x = isprime[i];
			y = n - x;
			if(x > y) {
				break;
			}

			if(a[y] == 0) {
				cont++;
			}

		}

		printf("Case %d: %d\n", cs, cont);
	}


}

