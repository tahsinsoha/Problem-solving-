#include<bits/stdc++.h>
using namespace std;
int main(){

      int n,first;
      cin>>n>>first;
      int a[n+1];
      priority_queue<int>pq;
      for(int i=0;i<n-1;i++){
        cin>>a[i];
        pq.push(a[i]);
      }

//priority_queue<int>pq;
//int k=pq.top();
int cont=0;
while(first<=pq.top()){
        int k=pq.top();
          pq.pop();
    cont++;
    k--;
    first++;
pq.push(k);

}

cout<<cont<<endl;
return 0;
}
