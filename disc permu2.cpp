#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[30],n,k,t,cs=0;
scanf ("%d", &t);
while(t--){
     scanf ("%d%d", &n, &k);
     for(int i=0;i<n;i++){
        arr[i]=i;
     }
      printf ("Case %d:\n", ++cs);
      while(k--){
        for(int i=0;i<n;i++)  printf ("%c", arr[i]+'A');
        printf("\n");
        if(!next_permutation(arr,arr+n))
            break;
      }

}
return 0;
}
