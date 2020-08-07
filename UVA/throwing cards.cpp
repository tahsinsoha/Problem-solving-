
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s;
	queue<int> qu;

	while (scanf("%d", &n), n) {
		for (int i = 1; i <= n; i++) {
			qu.push(i);
		}

		cout<<"Discarded cards:";
		while (qu.size() > 1) {
			cout<<' '<<qu.front();
			qu.pop();
			s = qu.front();
			qu.pop();
			if (!qu.empty())
				printf(",");
			qu.push(s);
		}
		cout<<endl;
		cout<<"Remaining card:"<<' '<<qu.front()<<endl;
		qu.pop();
	}

	return 0;
}
