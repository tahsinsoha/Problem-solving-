#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int array[101];
cin>>n;
for(int i=0;i<n;i++){
  cin>>array[i];

}
 int ma= distance(array, max_element(array, array + n));
 int mi= distance(array,min_element(array,array+n));
 cout<<ma<<mi<<endl;


return 0;
}
