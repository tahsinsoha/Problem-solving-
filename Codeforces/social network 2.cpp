#include <iostream>
#include <ctime>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;
int main(){
int n,k,a;
deque<int>d;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>a;
    //deque<int>::iterator it = find(numbers.begin(), numbers.end(), a);
   if (find(d.begin(), d.end(), a) != d.end()) continue;
   // if ((find(d.begin(), d.end(), a))) d.push_front(a);
  else    if( (find(d.begin(), d.end(), a) == d.end()) && d.size()==k){
            d.pop_back();
            d.push_front(a);
    }
    else if((find(d.begin(), d.end(), a) == d.end()) && d.size()<k) {
            d.push_front(a);
            }



}
cout<<d.size()<<endl;
for(int i=0;i<d.size();i++) cout<<d[i]<<" ";
cout<<endl;

return 0;
}
