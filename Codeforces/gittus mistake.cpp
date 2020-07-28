#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x;
scanf("%d",&n);
vector<int >v;
for(int i=1;i<=n;i++) {
    scanf("%d",&x);
    v.push_back(x);
}
for(int i=1;i<=n;i++){
 vector<int>::iterator it;

  it = find (v.begin(), v.end(), i);
  if (it != v.end()) continue;
  else {
    printf("%d",i);
    return 0;
  }
}

return 0;
}
